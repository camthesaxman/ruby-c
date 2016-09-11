int __fastcall sub_809A14C(int a1)
{
  int v1; // r2@1
  unsigned int v2; // r3@1
  signed int v3; // r0@1
  int v4; // r0@2
  _WORD *v5; // r2@4
  unsigned int v6; // r0@4
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (((unsigned int)v20008B4 >> 3) + 30) & 0x3F;
  v3 = (((unsigned int)v20008B4 >> 3) + 30) & 0x3F;
  if ( v3 > 31 )
    v4 = 2 * v3 + 3200;
  else
    v4 = 2 * v3 + 1216;
  v5 = (_WORD *)(v1 + v4);
  v6 = 0;
  do
  {
    *v5 = 0;
    ++v5;
    v2 = (v2 + 1) & 0x3F;
    if ( !v2 )
      v5 -= 1056;
    if ( v2 == 32 )
      v5 += 992;
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 0x2B );
  return v8;
}
