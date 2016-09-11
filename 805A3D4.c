int __fastcall fish1(int a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+0h] [bp-20h]@1
  char v5; // [sp+8h] [bp-18h]@1

  v1 = a1;
  memcpy(&v4, &gUnknown_0830FCF4, 6);
  memcpy(&v5, &gUnknown_0830FCFA, 6);
  *(_WORD *)(v1 + 32) = 0;
  *(_WORD *)(v1 + 34) = *((_WORD *)&v4 + *(_WORD *)(v1 + 38))
                      + (unsigned __int16)Random() % (signed int)*((_WORD *)&v5 + *(_WORD *)(v1 + 38));
  *(_WORD *)(v1 + 36) = BYTE1(dword_30048A0[9 * v202E85D + 1]);
  v2 = &dword_30048A0[9 * v202E85D];
  FieldObjectClearAnimIfSpecialAnimActive(v2);
  *((_BYTE *)v2 + 1) |= 8u;
  sub_8059C3C(*((_BYTE *)v2 + 24) & 0xF);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
