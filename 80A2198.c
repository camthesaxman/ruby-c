int __fastcall sub_80A2198(char a1)
{
  unsigned __int8 v1; // r0@1
  unsigned int v2; // r2@1
  int v3; // r3@1
  _WORD *v4; // r0@2
  int v5; // r1@2
  int v7; // [sp+8h] [bp-4h]@0

  v1 = CreateTask((int)sub_80A244C, a1);
  v2 = 1;
  v3 = 40 * v1;
  do
  {
    v4 = &byte_3004B28[2 * v2] + v3;
    v5 = *v4 | 0xFFFF;
    *v4 = -1;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xF );
  return v7;
}
