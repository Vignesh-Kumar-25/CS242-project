#ifndef org_apache_lucene_spatial3d_geom_SerializableObject_H
#define org_apache_lucene_spatial3d_geom_SerializableObject_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
          class GeoPolygon;
          class SerializableObject;
          class PlanetObject;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class BitSet;
  }
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
  }
  namespace lang {
    class ClassNotFoundException;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class SerializableObject : public ::java::lang::Object {
           public:
            enum {
              mid_readBitSet_8fcfc64c6c60db38,
              mid_readBoolean_dee52ced86162970,
              mid_readByteArray_9d0e99808a09c452,
              mid_readClass_3368bfa2e2caeb5d,
              mid_readDouble_4d08eac9e28f1c71,
              mid_readHeterogeneousArray_8f27fc4fd5a0eeaf,
              mid_readHomogeneousArray_8f27fc4fd5a0eeaf,
              mid_readInt_08ba80477e288276,
              mid_readLong_8582cf6068e6d680,
              mid_readObject_9f335f883f635fe9,
              mid_readObject_250ddb16ae251f96,
              mid_readObject_dec47299fb13e0bf,
              mid_readObject_5ad7e4eb0ae829b1,
              mid_readPlanetObject_725a391f3c5f0e36,
              mid_readPointArray_85ca701a744837ba,
              mid_readPolygonArray_874a753a89c15ed3,
              mid_readString_ff6af1dbfecc7de2,
              mid_write_065827f6e1eef6f6,
              mid_writeBitSet_29cb15f9f252f8f9,
              mid_writeBoolean_f5864760bbd31a23,
              mid_writeByteArray_13d4cf614c085fee,
              mid_writeClass_c17f0d2fea431945,
              mid_writeDouble_ef6829f2c1a5627b,
              mid_writeHeterogeneousArray_40224c4e3b85018b,
              mid_writeHeterogeneousArray_61b9742bc38e95d7,
              mid_writeHomogeneousArray_40224c4e3b85018b,
              mid_writeHomogeneousArray_61b9742bc38e95d7,
              mid_writeInt_894b0e094ab5383f,
              mid_writeLong_f5c2f3c6080772d4,
              mid_writeObject_f57d94f9b18336a9,
              mid_writePlanetObject_ae3527281e425be7,
              mid_writePointArray_f73d21d8336d11e7,
              mid_writePointArray_61b9742bc38e95d7,
              mid_writePolygonArray_b62792becba86254,
              mid_writePolygonArray_61b9742bc38e95d7,
              mid_writeString_50d565796ee1c40d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SerializableObject(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SerializableObject(const SerializableObject& obj) : ::java::lang::Object(obj) {}

            static ::java::util::BitSet readBitSet(const ::java::io::InputStream &);
            static jboolean readBoolean(const ::java::io::InputStream &);
            static JArray< jbyte > readByteArray(const ::java::io::InputStream &);
            static ::java::lang::Class readClass(const ::java::io::InputStream &);
            static jdouble readDouble(const ::java::io::InputStream &);
            static JArray< SerializableObject > readHeterogeneousArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static JArray< SerializableObject > readHomogeneousArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static jint readInt(const ::java::io::InputStream &);
            static jlong readLong(const ::java::io::InputStream &);
            static SerializableObject readObject(const ::java::io::InputStream &);
            static SerializableObject readObject(const ::java::io::InputStream &, const ::java::lang::Class &);
            static SerializableObject readObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static SerializableObject readObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static ::org::apache::lucene::spatial3d::geom::PlanetObject readPlanetObject(const ::java::io::InputStream &);
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > readPointArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPolygon > readPolygonArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static ::java::lang::String readString(const ::java::io::InputStream &);
            void write(const ::java::io::OutputStream &) const;
            static void writeBitSet(const ::java::io::OutputStream &, const ::java::util::BitSet &);
            static void writeBoolean(const ::java::io::OutputStream &, jboolean);
            static void writeByteArray(const ::java::io::OutputStream &, const JArray< jbyte > &);
            static void writeClass(const ::java::io::OutputStream &, const ::java::lang::Class &);
            static void writeDouble(const ::java::io::OutputStream &, jdouble);
            static void writeHeterogeneousArray(const ::java::io::OutputStream &, const JArray< SerializableObject > &);
            static void writeHeterogeneousArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeHomogeneousArray(const ::java::io::OutputStream &, const JArray< SerializableObject > &);
            static void writeHomogeneousArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeInt(const ::java::io::OutputStream &, jint);
            static void writeLong(const ::java::io::OutputStream &, jlong);
            static void writeObject(const ::java::io::OutputStream &, const SerializableObject &);
            static void writePlanetObject(const ::java::io::OutputStream &, const ::org::apache::lucene::spatial3d::geom::PlanetObject &);
            static void writePointArray(const ::java::io::OutputStream &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &);
            static void writePointArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writePolygonArray(const ::java::io::OutputStream &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPolygon > &);
            static void writePolygonArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeString(const ::java::io::OutputStream &, const ::java::lang::String &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(SerializableObject);
          extern PyTypeObject *PY_TYPE(SerializableObject);

          class t_SerializableObject {
          public:
            PyObject_HEAD
            SerializableObject object;
            static PyObject *wrap_Object(const SerializableObject&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
