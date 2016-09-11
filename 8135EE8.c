int unref_sub_8135EE8()
{
  char *v0; // r4@2
  unsigned int v1; // r0@2
  unsigned int v2; // r1@2
  signed int v3; // r5@4
  signed int v4; // r4@4
  _WORD *v5; // r6@4
  _WORD *v6; // r3@4
  _WORD *v7; // r2@4
  _WORD *v8; // r1@4
  signed int v9; // r4@6
  int v11; // [sp+10h] [bp-4h]@0

  if ( v2024EAC )
  {
    v0 = gUnknown_08405E7E;
    v1 = v2024EAE + v2024EAF + v2024EB0 + v2024EB1;
    v2 = 20;
  }
  else
  {
    v0 = gUnknown_08405E60;
    v1 = v2024EAE + v2024EAF + v2024EB0 + v2024EB1;
    v2 = 30;
  }
  v202533D = v0[v1 % v2];
  sub_8052D10(33706824, 33705646);
  StringCopy8(33706816, 33705636);
  v202533E = 1;
  v3 = 7;
  v4 = 0;
  v5 = (_WORD *)33718876;
  v6 = (_WORD *)33706828;
  v7 = (_WORD *)33706852;
  v8 = (_WORD *)33706840;
  do
  {
    *v6 = *v5;
    *v8 = v3;
    *v7 = v3++ + 6;
    ++v5;
    ++v6;
    ++v7;
    ++v8;
    ++v4;
  }
  while ( v4 <= 5 );
  v9 = 0;
  do
  {
    sub_803AF78((int)&dword_3004360[25 * v9], (_WORD *)(44 * v9 + 33706864));
    ++v9;
  }
  while ( v9 <= 2 );
  sub_8136088(33706812);
  return v11;
}
