int __fastcall sub_8073424(int a1)
{
  unsigned int v1; // r5@1
  unsigned int v2; // r6@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 16;
  v2 = ((a1 << 16) & 0x70000u) >> 16;
  if ( !v2 )
  {
    sub_80737A4(v1 >> 19, 0);
    sub_80737E0(v1 >> 19);
  }
  if ( v2 == 1 )
    sub_80737A4(v1 >> 19, 1);
  if ( v2 == 2 )
    sub_80737A4(v1 >> 19, 2);
  if ( v2 == 3 )
    sub_80737A4(v1 >> 19, 3);
  if ( v2 == 4 )
    sub_80737A4(v1 >> 19, 4);
  if ( v2 == 5 )
    sub_80737A4(v1 >> 19, 5);
  if ( v2 == 6 )
    sub_80737A4(v1 >> 19, 6);
  if ( v2 == 7 )
    sub_80737A4(v1 >> 19, 7);
  return v4;
}
