int __fastcall sub_80735B4(int a1)
{
  unsigned int v1; // r4@1
  unsigned int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1 << 16;
  v2 = ((a1 << 16) & 0xF0000u) >> 16;
  if ( !v2 )
    sub_807368C((v1 >> 20) & 0xFF);
  if ( v2 == 1 )
    sub_80736DC((v1 >> 20) & 0xFF);
  return v4;
}
