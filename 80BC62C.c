int __fastcall sub_80BC62C(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r0@1
  int v3; // r0@1
  _BYTE *v4; // r4@1
  signed int v5; // r0@1
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = script_env_2_enable();
  v3 = sub_80F944C(v2);
  InitMenuInUpperLeftCornerPlaySoundWhenAPressed(v3);
  v4 = &byte_3004B28[40 * v1];
  v5 = (unsigned __int8)sub_80BC538();
  *(_WORD *)v4 = v5;
  if ( v5 )
  {
    if ( v5 > 7 )
      LOWORD(v5) = 7;
    *((_WORD *)v4 + 3) = v5;
    *((_WORD *)v4 + 1) = 0;
    *((_WORD *)v4 + 2) = 0;
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
    sub_80BC7D8(v1);
    dword_3004B20[10 * v1] = (int)sub_80BC824;
  }
  else
  {
    DisplayItemMessageOnField(v1, "Œ‹ŸÊŸ", sub_80BCC54, 0);
  }
  return v7;
}
