int __fastcall sub_8114DB4(int a1, int a2)
{
  unsigned int v2; // r1@1
  char *v3; // r2@1
  char v4; // r0@2
  char v5; // r1@2
  int v7; // [sp+0h] [bp-4h]@0

  v2 = a2 << 24;
  v3 = *(char **)(4 * (v2 >> 25) + (a1 << 7) + 0x20188C4);
  if ( (v2 >> 24) & 1 )
  {
    v4 = *v3;
    v5 = -16;
  }
  else
  {
    v4 = *v3;
    v5 = 15;
  }
  *v3 = v4 | v5;
  return v7;
}
