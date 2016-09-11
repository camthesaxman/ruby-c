int __fastcall sub_80A7230(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int v2; // r6@1
  _BYTE *v3; // r7@1
  signed int v4; // r1@1
  int v5; // r0@8
  int v7; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 40 * a1;
  v3 = &byte_3004B28[v2];
  v4 = *(_WORD *)&byte_3004B28[v2 + 30];
  if ( v4 == 204 )
  {
    audio_play(5u);
    sub_80F98A4(2);
    sub_80F98A4(3);
    v203855E = 4;
    dword_3000704 = (int)&gUnknown_083C1708;
    v2038564 = 2;
    *(_WORD *)&byte_3004B28[v2 + 20] = (unsigned __int8)byte_3005D10[4 * v2038559 + 1]
                                     + (unsigned __int8)byte_3005D10[4 * v2038559]
                                     + 1;
    v5 = sub_80A48E8(v1, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
    sub_80A73FC(v5);
    sub_80A6DF0((int)gBG1TilemapBuffer);
    goto _080A7358;
  }
  if ( v4 <= 204 )
  {
    if ( v4 == 102 )
    {
      audio_play(5u);
      sub_80A4E8C(1, 2u);
    }
    goto _080A7358;
  }
  if ( v4 != 306 )
  {
_080A7358:
    ++*((_WORD *)v3 + 15);
    return v7;
  }
  audio_play(5u);
  sub_80A4DA4((int)gBG1TilemapBuffer);
  memcpy(33709204, 33677312, 80);
  memcpy(33709364, 33681408, 64);
  *((_WORD *)v3 + 8) = (unsigned int)sub_802E424 >> 16;
  *((_WORD *)v3 + 9) = (unsigned int)sub_802E424;
  dword_3004B20[v2 / 4] = (int)sub_80A5B00;
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  return v7;
}
