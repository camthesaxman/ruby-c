int __fastcall sub_8143BFC(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v4000000 = 0;
    sub_81450AC(a1);
    dword_3004B20[10 * v1] = (int)c2_080C9BFC;
  }
  return v3;
}
