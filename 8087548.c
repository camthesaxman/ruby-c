int __fastcall sub_8087548(int a1, int a2)
{
  _BYTE *v2; // r4@1
  char v3; // r0@2

  v2 = (_BYTE *)a2;
  if ( (unsigned __int8)gSprites[68 * *(_WORD *)(a1 + 10) + 43] > 1u )
  {
    ++*(_WORD *)(a1 + 8);
    *(_BYTE *)(a2 + 1) &= 0xDFu;
    CameraObjectReset1();
    audio_play(0xAFu);
    v3 = sub_80608A4(4u);
    FieldObjectSetSpecialAnim(v2, v3);
  }
  return 0;
}
