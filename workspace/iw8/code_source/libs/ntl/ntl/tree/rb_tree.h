/*
==============
ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::erase_tree
==============
*/

void __fastcall ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::erase_tree(ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare> *this, ntl::red_black_tree_node<AdjacentEdgeInfo> *p_node)
{
  ?erase_tree@?$red_black_tree@UAdjacentEdgeInfo@@U1@V?$fixed_pool_allocator@U?$red_black_tree_node@UAdjacentEdgeInfo@@@ntl@@$0EAA@$07@ntl@@V?$return_input@UAdjacentEdgeInfo@@@3@UAdjacentEdgeInfoCompare@@@ntl@@AEAAXPEAU?$red_black_tree_node@UAdjacentEdgeInfo@@@2@@Z(this, p_node);
}

/*
==============
ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::insert_node
==============
*/

ntl::red_black_tree_iterator<AdjacentEdgeInfo,ntl::red_black_tree_node<AdjacentEdgeInfo>,AdjacentEdgeInfo *,AdjacentEdgeInfo &> *__fastcall ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::insert_node(ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare> *this, ntl::red_black_tree_iterator<AdjacentEdgeInfo,ntl::red_black_tree_node<AdjacentEdgeInfo>,AdjacentEdgeInfo *,AdjacentEdgeInfo &> *result, ntl::red_black_tree_node_base *p_insert, const AdjacentEdgeInfo *r_element, bool hintElementLessInsert, bool hintInsertLessElement)
{
  return ?insert_node@?$red_black_tree@UAdjacentEdgeInfo@@U1@V?$fixed_pool_allocator@U?$red_black_tree_node@UAdjacentEdgeInfo@@@ntl@@$0EAA@$07@ntl@@V?$return_input@UAdjacentEdgeInfo@@@3@UAdjacentEdgeInfoCompare@@@ntl@@AEAA?AV?$red_black_tree_iterator@UAdjacentEdgeInfo@@U?$red_black_tree_node@UAdjacentEdgeInfo@@@ntl@@PEAU1@AEAU1@@2@PEAVred_black_tree_node_base@2@AEBUAdjacentEdgeInfo@@_N2@Z(this, result, p_insert, r_element, hintElementLessInsert, hintInsertLessElement);
}

/*
==============
ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::erase_tree
==============
*/
void ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::erase_tree(ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare> *this, ntl::red_black_tree_node<AdjacentEdgeInfo> *p_node)
{
  ntl::red_black_tree_node<AdjacentEdgeInfo> *v2; 
  ntl::red_black_tree_node<AdjacentEdgeInfo> *mp_left; 

  if ( p_node )
  {
    v2 = p_node;
    do
    {
      ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::erase_tree(this, (ntl::red_black_tree_node<AdjacentEdgeInfo> *)v2->mp_right);
      mp_left = (ntl::red_black_tree_node<AdjacentEdgeInfo> *)v2->mp_left;
      *(_QWORD *)&v2->m_color = this->m_freelist.m_head.mp_next;
      this->m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v2;
      v2 = mp_left;
    }
    while ( mp_left );
  }
}

/*
==============
ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::insert_node
==============
*/
ntl::red_black_tree_iterator<AdjacentEdgeInfo,ntl::red_black_tree_node<AdjacentEdgeInfo>,AdjacentEdgeInfo *,AdjacentEdgeInfo &> *ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::insert_node(ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare> *this, ntl::red_black_tree_iterator<AdjacentEdgeInfo,ntl::red_black_tree_node<AdjacentEdgeInfo>,AdjacentEdgeInfo *,AdjacentEdgeInfo &> *result, ntl::red_black_tree_node_base *p_insert, const AdjacentEdgeInfo *r_element, bool hintElementLessInsert, bool hintInsertLessElement)
{
  ntl::internal::pool_allocator_freelist<64> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  __m256i v14; 
  ntl::red_black_tree_iterator<AdjacentEdgeInfo,ntl::red_black_tree_node<AdjacentEdgeInfo>,AdjacentEdgeInfo *,AdjacentEdgeInfo &> *v15; 
  __m256i v16; 

  if ( !p_insert && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
    __debugbreak();
  p_m_freelist = &this->m_freelist;
  if ( !this->m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<64> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x40ui64, 0x400ui64) )
    __debugbreak();
  mp_next = p_m_freelist->m_head.mp_next;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v16.m256i_i32[0] = 0;
  v16.m256i_i64[1] = (__int64)p_insert;
  p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
  v14 = *(__m256i *)r_element;
  *(_OWORD *)&v16.m256i_u64[2] = _XMM0;
  *(__m256i *)&mp_next->mp_next = v16;
  *(__m256i *)&mp_next[4].mp_next = v14;
  if ( p_insert == &this->m_endNodeBase )
  {
    this->m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
    this->m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
LABEL_21:
    this->m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
    goto LABEL_22;
  }
  if ( !hintInsertLessElement && (hintElementLessInsert || AdjacentEdgeInfoCompare::operator()(&this->m_keyCompare, r_element, (const AdjacentEdgeInfo *)&p_insert[1])) )
  {
    p_insert->mp_left = (ntl::red_black_tree_node_base *)mp_next;
    if ( p_insert == this->m_endNodeBase.mp_left )
      this->m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
  }
  else
  {
    p_insert->mp_right = (ntl::red_black_tree_node_base *)mp_next;
    if ( p_insert == this->m_endNodeBase.mp_right )
      goto LABEL_21;
  }
LABEL_22:
  ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &this->m_endNodeBase.mp_parent);
  ++this->m_size;
  v15 = result;
  result->mp_node = (ntl::red_black_tree_node<AdjacentEdgeInfo> *)mp_next;
  return v15;
}

