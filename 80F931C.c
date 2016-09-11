_BOOL4 __fastcall sub_80F931C(unsigned __int16 a1)
{
  signed int v1; // r4@1

  v1 = a1;
  return is_c1_link_related_active() != 1 || (unsigned __int8)itemid_is_mail(v1) != 1;
}
