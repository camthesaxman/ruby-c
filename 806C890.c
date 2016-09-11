int __fastcall sub_806C890(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r5@1
  unsigned int v3; // r4@1
  char *v4; // r0@5
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_806CA00(a1);
  v3 = *(_WORD *)&gSprites[68 * v2 + 46] & 0xFF;
  if ( v3 != 6 )
  {
    sub_806DA44(v1, v3, 0);
    if ( v3 > 5 )
      sub_806BBEC(1u);
    else
      sub_806BF24(&gUnknown_083769A8[2 * v3], v3, 3, 0);
    v4 = &gSprites[68 * v2];
    *((_WORD *)v4 + 24) = 0;
    *((_WORD *)v4 + 23) = 6;
    *((_WORD *)v4 + 16) = 196;
    *((_WORD *)v4 + 17) = 136;
    sub_806BB9C(2u);
    v201B261 = 2;
    audio_play(5);
  }
  return v6;
}
