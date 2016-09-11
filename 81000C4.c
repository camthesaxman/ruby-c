int __fastcall sub_81000C4(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  sub_8100174(v1);
  if ( *((_BYTE *)&gDecorations + 32 * *(_BYTE *)(v20388D0 + v20388F5) + 17) == 4 )
  {
    v2 = &dword_3004B20[10 * v1];
    v20391A4 = *((_WORD *)v2 + 4) - 7;
    v20391A6 = *((_WORD *)v2 + 5) - 7;
    script_env_1_execute_new_script((int)&gUnknown_081A2F7B);
  }
  else
  {
    sub_80FF394(dword_3004B20[10 * v1 + 2], HIWORD(dword_3004B20[10 * v1 + 2]), *(_BYTE *)(v20388D0 + v20388F5));
  }
  *(_WORD *)&gSprites[68 * v20391A8 + 34] += 2;
  sub_810028C(v1);
  return v4;
}
