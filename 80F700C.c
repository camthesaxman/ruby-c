int __fastcall sub_80F700C(_BYTE *a1, unsigned __int16 a2)
{
  char *v2; // r5@1
  _BYTE *v3; // r3@1
  _BYTE *v4; // r0@2
  int v6; // [sp+8h] [bp-4h]@0

  v2 = (char *)&gTrainers + 40 * *(_WORD *)(8 * a2 + 0x200CEE8);
  v3 = a1;
  if ( a2 < (unsigned int)v200D158 )
  {
    v4 = StringCopy(a1, &gTrainerClassNames[13 * (unsigned __int8)v2[1]]);
    *v4 = -4;
    v4[1] = 19;
    v4[2] = 75;
    v3 = StringCopy(v4 + 3, v2 + 4);
  }
  *v3 = -4;
  v3[1] = 19;
  v3[2] = -128;
  v3[3] = -1;
  return v6;
}
