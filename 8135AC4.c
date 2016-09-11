int sub_8135AC4()
{
  int v0; // r6@1
  char *v1; // r4@2
  unsigned int v2; // r0@2
  unsigned int v3; // r1@2
  char v4; // r0@4
  _WORD *v5; // r2@4
  _WORD *v6; // r1@4
  signed int v7; // r4@4
  signed int v8; // r4@6
  int v10; // [sp+Ch] [bp-4h]@0

  v0 = v20253F8 & 1;
  if ( v2024EAC )
  {
    v1 = gUnknown_08405E7E;
    v2 = v2024EAE + v2024EAF + v2024EB0 + v2024EB1;
    v3 = 20;
  }
  else
  {
    v1 = gUnknown_08405E60;
    v2 = v2024EAE + v2024EAF + v2024EB0 + v2024EB1;
    v3 = 30;
  }
  v4 = v1[v2 % v3];
  v2024F4C = v20253F8 & 1;
  v2024F4D = v4;
  sub_8052D10(33705816, 33705646);
  StringCopy8(33705808, 33705636);
  v2024F4E = sub_8135D3C(v0);
  v5 = (_WORD *)33718876;
  v6 = (_WORD *)33705820;
  v7 = 5;
  do
  {
    *v6 = *v5;
    ++v5;
    ++v6;
    --v7;
  }
  while ( v7 >= 0 );
  v8 = 0;
  do
  {
    sub_803AF78((int)&unk_30042FC + 100 * *(_BYTE *)(v8 + 33707017), (_WORD *)(44 * v8 + 33705832));
    ++v8;
  }
  while ( v8 <= 2 );
  sub_8135CC4(33705804);
  sub_8135A3C();
  return v10;
}
