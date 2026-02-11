
import os
import sys
if sys.platform == 'win32':
  from .windows import add_jvm_dll_directory_to_path
  add_jvm_dll_directory_to_path('client')
from . import _lucene

__module_dir__ = os.path.abspath(os.path.dirname(__file__))

class JavaError(Exception):
  def getJavaException(self):
    return self.args[0]
  def __str__(self):
    writer = StringWriter()
    self.getJavaException().printStackTrace(PrintWriter(writer))
    return "\n".join((str(super(JavaError, self)), "    Java stacktrace:", str(writer)))

class InvalidArgsError(Exception):
  pass

_lucene._set_exception_types(JavaError, InvalidArgsError)

VERSION = "9.6.0"
CLASSPATH = [os.path.join(__module_dir__, "lucene-core-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-analysis-common-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-backward-codecs-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-classification-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-codecs-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-expressions-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-extensions-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-facet-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-grouping-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-highlighter-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-join-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-analysis-kuromoji-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-memory-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-misc-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-monitor-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-analysis-nori-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-queries-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-queryparser-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-sandbox-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-spatial3d-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-analysis-stempel-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-suggest-9.6.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "antlr4-runtime-4.11.1.jar"), os.path.join(__module_dir__, "asm-7.2.jar"), os.path.join(__module_dir__, "asm-commons-7.2.jar"), os.path.join(__module_dir__, "hppc-0.9.1.jar")]
CLASSPATH = os.pathsep.join(CLASSPATH)
_lucene.CLASSPATH = CLASSPATH
_lucene._set_function_self(_lucene.initVM, _lucene)

from ._lucene import *
from java.io import PrintWriter, StringWriter

