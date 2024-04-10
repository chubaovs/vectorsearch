// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_REQUEST_GAMMA_API_H_
#define FLATBUFFERS_GENERATED_REQUEST_GAMMA_API_H_

#include "flatbuffers/flatbuffers.h"

namespace gamma_api {

struct TermFilter;

struct RangeFilter;

struct VectorQuery;

struct Request;

struct TermFilter FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FIELD = 4,
    VT_VALUE = 6,
    VT_IS_UNION = 8
  };
  const flatbuffers::String *field() const {
    return GetPointer<const flatbuffers::String *>(VT_FIELD);
  }
  const flatbuffers::Vector<uint8_t> *value() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_VALUE);
  }
  int32_t is_union() const {
    return GetField<int32_t>(VT_IS_UNION, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FIELD) &&
           verifier.VerifyString(field()) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyVector(value()) &&
           VerifyField<int32_t>(verifier, VT_IS_UNION) &&
           verifier.EndTable();
  }
};

struct TermFilterBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_field(flatbuffers::Offset<flatbuffers::String> field) {
    fbb_.AddOffset(TermFilter::VT_FIELD, field);
  }
  void add_value(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value) {
    fbb_.AddOffset(TermFilter::VT_VALUE, value);
  }
  void add_is_union(int32_t is_union) {
    fbb_.AddElement<int32_t>(TermFilter::VT_IS_UNION, is_union, 0);
  }
  explicit TermFilterBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TermFilterBuilder &operator=(const TermFilterBuilder &);
  flatbuffers::Offset<TermFilter> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TermFilter>(end);
    return o;
  }
};

inline flatbuffers::Offset<TermFilter> CreateTermFilter(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> field = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value = 0,
    int32_t is_union = 0) {
  TermFilterBuilder builder_(_fbb);
  builder_.add_is_union(is_union);
  builder_.add_value(value);
  builder_.add_field(field);
  return builder_.Finish();
}

inline flatbuffers::Offset<TermFilter> CreateTermFilterDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *field = nullptr,
    const std::vector<uint8_t> *value = nullptr,
    int32_t is_union = 0) {
  auto field__ = field ? _fbb.CreateString(field) : 0;
  auto value__ = value ? _fbb.CreateVector<uint8_t>(*value) : 0;
  return gamma_api::CreateTermFilter(
      _fbb,
      field__,
      value__,
      is_union);
}

struct RangeFilter FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FIELD = 4,
    VT_LOWER_VALUE = 6,
    VT_UPPER_VALUE = 8,
    VT_INCLUDE_LOWER = 10,
    VT_INCLUDE_UPPER = 12
  };
  const flatbuffers::String *field() const {
    return GetPointer<const flatbuffers::String *>(VT_FIELD);
  }
  const flatbuffers::Vector<uint8_t> *lower_value() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_LOWER_VALUE);
  }
  const flatbuffers::Vector<uint8_t> *upper_value() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_UPPER_VALUE);
  }
  bool include_lower() const {
    return GetField<uint8_t>(VT_INCLUDE_LOWER, 0) != 0;
  }
  bool include_upper() const {
    return GetField<uint8_t>(VT_INCLUDE_UPPER, 0) != 0;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FIELD) &&
           verifier.VerifyString(field()) &&
           VerifyOffset(verifier, VT_LOWER_VALUE) &&
           verifier.VerifyVector(lower_value()) &&
           VerifyOffset(verifier, VT_UPPER_VALUE) &&
           verifier.VerifyVector(upper_value()) &&
           VerifyField<uint8_t>(verifier, VT_INCLUDE_LOWER) &&
           VerifyField<uint8_t>(verifier, VT_INCLUDE_UPPER) &&
           verifier.EndTable();
  }
};

struct RangeFilterBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_field(flatbuffers::Offset<flatbuffers::String> field) {
    fbb_.AddOffset(RangeFilter::VT_FIELD, field);
  }
  void add_lower_value(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> lower_value) {
    fbb_.AddOffset(RangeFilter::VT_LOWER_VALUE, lower_value);
  }
  void add_upper_value(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> upper_value) {
    fbb_.AddOffset(RangeFilter::VT_UPPER_VALUE, upper_value);
  }
  void add_include_lower(bool include_lower) {
    fbb_.AddElement<uint8_t>(RangeFilter::VT_INCLUDE_LOWER, static_cast<uint8_t>(include_lower), 0);
  }
  void add_include_upper(bool include_upper) {
    fbb_.AddElement<uint8_t>(RangeFilter::VT_INCLUDE_UPPER, static_cast<uint8_t>(include_upper), 0);
  }
  explicit RangeFilterBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RangeFilterBuilder &operator=(const RangeFilterBuilder &);
  flatbuffers::Offset<RangeFilter> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RangeFilter>(end);
    return o;
  }
};

inline flatbuffers::Offset<RangeFilter> CreateRangeFilter(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> field = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> lower_value = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> upper_value = 0,
    bool include_lower = false,
    bool include_upper = false) {
  RangeFilterBuilder builder_(_fbb);
  builder_.add_upper_value(upper_value);
  builder_.add_lower_value(lower_value);
  builder_.add_field(field);
  builder_.add_include_upper(include_upper);
  builder_.add_include_lower(include_lower);
  return builder_.Finish();
}

inline flatbuffers::Offset<RangeFilter> CreateRangeFilterDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *field = nullptr,
    const std::vector<uint8_t> *lower_value = nullptr,
    const std::vector<uint8_t> *upper_value = nullptr,
    bool include_lower = false,
    bool include_upper = false) {
  auto field__ = field ? _fbb.CreateString(field) : 0;
  auto lower_value__ = lower_value ? _fbb.CreateVector<uint8_t>(*lower_value) : 0;
  auto upper_value__ = upper_value ? _fbb.CreateVector<uint8_t>(*upper_value) : 0;
  return gamma_api::CreateRangeFilter(
      _fbb,
      field__,
      lower_value__,
      upper_value__,
      include_lower,
      include_upper);
}

struct VectorQuery FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_VALUE = 6,
    VT_MIN_SCORE = 8,
    VT_MAX_SCORE = 10,
    VT_BOOST = 12,
    VT_HAS_BOOST = 14,
    VT_INDEX_TYPE = 16
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<uint8_t> *value() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_VALUE);
  }
  double min_score() const {
    return GetField<double>(VT_MIN_SCORE, 0.0);
  }
  double max_score() const {
    return GetField<double>(VT_MAX_SCORE, 0.0);
  }
  double boost() const {
    return GetField<double>(VT_BOOST, 0.0);
  }
  int32_t has_boost() const {
    return GetField<int32_t>(VT_HAS_BOOST, 0);
  }
  const flatbuffers::String *index_type() const {
    return GetPointer<const flatbuffers::String *>(VT_INDEX_TYPE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyVector(value()) &&
           VerifyField<double>(verifier, VT_MIN_SCORE) &&
           VerifyField<double>(verifier, VT_MAX_SCORE) &&
           VerifyField<double>(verifier, VT_BOOST) &&
           VerifyField<int32_t>(verifier, VT_HAS_BOOST) &&
           VerifyOffset(verifier, VT_INDEX_TYPE) &&
           verifier.VerifyString(index_type()) &&
           verifier.EndTable();
  }
};

struct VectorQueryBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(VectorQuery::VT_NAME, name);
  }
  void add_value(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value) {
    fbb_.AddOffset(VectorQuery::VT_VALUE, value);
  }
  void add_min_score(double min_score) {
    fbb_.AddElement<double>(VectorQuery::VT_MIN_SCORE, min_score, 0.0);
  }
  void add_max_score(double max_score) {
    fbb_.AddElement<double>(VectorQuery::VT_MAX_SCORE, max_score, 0.0);
  }
  void add_boost(double boost) {
    fbb_.AddElement<double>(VectorQuery::VT_BOOST, boost, 0.0);
  }
  void add_has_boost(int32_t has_boost) {
    fbb_.AddElement<int32_t>(VectorQuery::VT_HAS_BOOST, has_boost, 0);
  }
  void add_index_type(flatbuffers::Offset<flatbuffers::String> index_type) {
    fbb_.AddOffset(VectorQuery::VT_INDEX_TYPE, index_type);
  }
  explicit VectorQueryBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  VectorQueryBuilder &operator=(const VectorQueryBuilder &);
  flatbuffers::Offset<VectorQuery> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<VectorQuery>(end);
    return o;
  }
};

inline flatbuffers::Offset<VectorQuery> CreateVectorQuery(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value = 0,
    double min_score = 0.0,
    double max_score = 0.0,
    double boost = 0.0,
    int32_t has_boost = 0,
    flatbuffers::Offset<flatbuffers::String> index_type = 0) {
  VectorQueryBuilder builder_(_fbb);
  builder_.add_boost(boost);
  builder_.add_max_score(max_score);
  builder_.add_min_score(min_score);
  builder_.add_index_type(index_type);
  builder_.add_has_boost(has_boost);
  builder_.add_value(value);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<VectorQuery> CreateVectorQueryDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const std::vector<uint8_t> *value = nullptr,
    double min_score = 0.0,
    double max_score = 0.0,
    double boost = 0.0,
    int32_t has_boost = 0,
    const char *index_type = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto value__ = value ? _fbb.CreateVector<uint8_t>(*value) : 0;
  auto index_type__ = index_type ? _fbb.CreateString(index_type) : 0;
  return gamma_api::CreateVectorQuery(
      _fbb,
      name__,
      value__,
      min_score,
      max_score,
      boost,
      has_boost,
      index_type__);
}

struct Request FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_REQ_NUM = 4,
    VT_TOPN = 6,
    VT_BRUTE_FORCE_SEARCH = 8,
    VT_VEC_FIELDS = 10,
    VT_FIELDS = 12,
    VT_RANGE_FILTERS = 14,
    VT_TERM_FILTERS = 16,
    VT_INDEX_PARAMS = 18,
    VT_MULTI_VECTOR_RANK = 20,
    VT_L2_SQRT = 22
  };
  int32_t req_num() const {
    return GetField<int32_t>(VT_REQ_NUM, 0);
  }
  int32_t topn() const {
    return GetField<int32_t>(VT_TOPN, 0);
  }
  int32_t brute_force_search() const {
    return GetField<int32_t>(VT_BRUTE_FORCE_SEARCH, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<VectorQuery>> *vec_fields() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<VectorQuery>> *>(VT_VEC_FIELDS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *fields() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_FIELDS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<RangeFilter>> *range_filters() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<RangeFilter>> *>(VT_RANGE_FILTERS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<TermFilter>> *term_filters() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TermFilter>> *>(VT_TERM_FILTERS);
  }
  const flatbuffers::String *index_params() const {
    return GetPointer<const flatbuffers::String *>(VT_INDEX_PARAMS);
  }
  int32_t multi_vector_rank() const {
    return GetField<int32_t>(VT_MULTI_VECTOR_RANK, 0);
  }
  bool l2_sqrt() const {
    return GetField<uint8_t>(VT_L2_SQRT, 0) != 0;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_REQ_NUM) &&
           VerifyField<int32_t>(verifier, VT_TOPN) &&
           VerifyField<int32_t>(verifier, VT_BRUTE_FORCE_SEARCH) &&
           VerifyOffset(verifier, VT_VEC_FIELDS) &&
           verifier.VerifyVector(vec_fields()) &&
           verifier.VerifyVectorOfTables(vec_fields()) &&
           VerifyOffset(verifier, VT_FIELDS) &&
           verifier.VerifyVector(fields()) &&
           verifier.VerifyVectorOfStrings(fields()) &&
           VerifyOffset(verifier, VT_RANGE_FILTERS) &&
           verifier.VerifyVector(range_filters()) &&
           verifier.VerifyVectorOfTables(range_filters()) &&
           VerifyOffset(verifier, VT_TERM_FILTERS) &&
           verifier.VerifyVector(term_filters()) &&
           verifier.VerifyVectorOfTables(term_filters()) &&
           VerifyOffset(verifier, VT_INDEX_PARAMS) &&
           verifier.VerifyString(index_params()) &&
           VerifyField<int32_t>(verifier, VT_MULTI_VECTOR_RANK) &&
           VerifyField<uint8_t>(verifier, VT_L2_SQRT) &&
           verifier.EndTable();
  }
};

struct RequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_req_num(int32_t req_num) {
    fbb_.AddElement<int32_t>(Request::VT_REQ_NUM, req_num, 0);
  }
  void add_topn(int32_t topn) {
    fbb_.AddElement<int32_t>(Request::VT_TOPN, topn, 0);
  }
  void add_brute_force_search(int32_t brute_force_search) {
    fbb_.AddElement<int32_t>(Request::VT_BRUTE_FORCE_SEARCH, brute_force_search, 0);
  }
  void add_vec_fields(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<VectorQuery>>> vec_fields) {
    fbb_.AddOffset(Request::VT_VEC_FIELDS, vec_fields);
  }
  void add_fields(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> fields) {
    fbb_.AddOffset(Request::VT_FIELDS, fields);
  }
  void add_range_filters(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<RangeFilter>>> range_filters) {
    fbb_.AddOffset(Request::VT_RANGE_FILTERS, range_filters);
  }
  void add_term_filters(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TermFilter>>> term_filters) {
    fbb_.AddOffset(Request::VT_TERM_FILTERS, term_filters);
  }
  void add_index_params(flatbuffers::Offset<flatbuffers::String> index_params) {
    fbb_.AddOffset(Request::VT_INDEX_PARAMS, index_params);
  }
  void add_multi_vector_rank(int32_t multi_vector_rank) {
    fbb_.AddElement<int32_t>(Request::VT_MULTI_VECTOR_RANK, multi_vector_rank, 0);
  }
  void add_l2_sqrt(bool l2_sqrt) {
    fbb_.AddElement<uint8_t>(Request::VT_L2_SQRT, static_cast<uint8_t>(l2_sqrt), 0);
  }
  explicit RequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RequestBuilder &operator=(const RequestBuilder &);
  flatbuffers::Offset<Request> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Request>(end);
    return o;
  }
};

inline flatbuffers::Offset<Request> CreateRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t req_num = 0,
    int32_t topn = 0,
    int32_t brute_force_search = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<VectorQuery>>> vec_fields = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> fields = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<RangeFilter>>> range_filters = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TermFilter>>> term_filters = 0,
    flatbuffers::Offset<flatbuffers::String> index_params = 0,
    int32_t multi_vector_rank = 0,
    bool l2_sqrt = false) {
  RequestBuilder builder_(_fbb);
  builder_.add_multi_vector_rank(multi_vector_rank);
  builder_.add_index_params(index_params);
  builder_.add_term_filters(term_filters);
  builder_.add_range_filters(range_filters);
  builder_.add_fields(fields);
  builder_.add_vec_fields(vec_fields);
  builder_.add_brute_force_search(brute_force_search);
  builder_.add_topn(topn);
  builder_.add_req_num(req_num);
  builder_.add_l2_sqrt(l2_sqrt);
  return builder_.Finish();
}

inline flatbuffers::Offset<Request> CreateRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t req_num = 0,
    int32_t topn = 0,
    int32_t brute_force_search = 0,
    const std::vector<flatbuffers::Offset<VectorQuery>> *vec_fields = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *fields = nullptr,
    const std::vector<flatbuffers::Offset<RangeFilter>> *range_filters = nullptr,
    const std::vector<flatbuffers::Offset<TermFilter>> *term_filters = nullptr,
    const char *index_params = nullptr,
    int32_t multi_vector_rank = 0,
    bool l2_sqrt = false) {
  auto vec_fields__ = vec_fields ? _fbb.CreateVector<flatbuffers::Offset<VectorQuery>>(*vec_fields) : 0;
  auto fields__ = fields ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*fields) : 0;
  auto range_filters__ = range_filters ? _fbb.CreateVector<flatbuffers::Offset<RangeFilter>>(*range_filters) : 0;
  auto term_filters__ = term_filters ? _fbb.CreateVector<flatbuffers::Offset<TermFilter>>(*term_filters) : 0;
  auto index_params__ = index_params ? _fbb.CreateString(index_params) : 0;
  return gamma_api::CreateRequest(
      _fbb,
      req_num,
      topn,
      brute_force_search,
      vec_fields__,
      fields__,
      range_filters__,
      term_filters__,
      index_params__,
      multi_vector_rank,
      l2_sqrt);
}

inline const gamma_api::Request *GetRequest(const void *buf) {
  return flatbuffers::GetRoot<gamma_api::Request>(buf);
}

inline const gamma_api::Request *GetSizePrefixedRequest(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<gamma_api::Request>(buf);
}

inline bool VerifyRequestBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<gamma_api::Request>(nullptr);
}

inline bool VerifySizePrefixedRequestBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<gamma_api::Request>(nullptr);
}

inline void FinishRequestBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gamma_api::Request> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedRequestBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gamma_api::Request> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace gamma_api

#endif  // FLATBUFFERS_GENERATED_REQUEST_GAMMA_API_H_
