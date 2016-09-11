int __fastcall sub_80AA658(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_80AA340(a1);
  sub_80AA388(v1);
  sub_80AA3D0(v1);
  sub_80AA418(v1);
  sub_80AA460(v1);
  sub_80AA4A8(v1);
  v2 = 0;
  do
  {
    sub_80AA4F0(v1, v2);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  return v4;
}
