unsigned int __fastcall sub_8077F7C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r0@2
  signed int v3; // r1@2

  v1 = a1;
  if ( battle_side_get_owner(a1) << 24 )
  {
    v2 = (sub_8077ABC(v1, 1u) << 16) & 0xFFFFFF;
    v3 = 0x100000;
  }
  else
  {
    v2 = (sub_8077ABC(v1, 1u) << 16) & 0xFFFFFF;
    v3 = 1114112;
  }
  return ((unsigned int)(v2 + v3) >> 16) & 0xFF;
}
