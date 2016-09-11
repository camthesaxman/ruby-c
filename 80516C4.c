int __fastcall sub_80516C4(int a1, unsigned __int16 a2)
{
  int v2; // r3@1
  int v4; // [sp+4h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v2 = dword_3004854;
  *(_WORD *)(dword_3004854 + 128 + 2 * a1) = a2;
  sub_804E844(v2 + 16 * (unsigned __int8)a1 + 380, a2);
  return v4;
}
