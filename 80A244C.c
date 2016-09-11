int __fastcall sub_80A244C(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned int v2; // r5@1
  int v3; // r4@3
  int v4; // r0@3
  unsigned __int8 v6; // [sp+0h] [bp-18h]@2
  int v7; // [sp+14h] [bp-4h]@5

  v1 = a1;
  v2 = 0;
  do
  {
    sub_80A22F4(v1, v2, &v6);
    if ( v6 != 255 )
    {
      v3 = v6;
      v4 = sub_80A23B8(v2);
      sub_80A2490(v1, v2, v3, v4);
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xF );
  return v7;
}
