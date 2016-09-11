int __fastcall sub_80FF0E0(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  int *v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = 40 * a1;
  v2 = &dword_3004B20[v1 / 4];
  *((_WORD *)v2 + 7) = v2025734;
  *((_WORD *)v2 + 8) = v2025736;
  PlayerGetDestCoords(&byte_3004B28[v1], &byte_3004B28[v1 + 2]);
  return v4;
}
