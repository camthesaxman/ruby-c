int __fastcall sub_8100874(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    sub_8100740(v1 + 32 * v2 + 132, *(_WORD *)(v1 + 4 + 2 * v2));
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x3F );
  return v4;
}
