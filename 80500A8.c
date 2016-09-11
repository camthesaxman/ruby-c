int sub_80500A8()
{
  unsigned int v0; // r6@1
  int v1; // r4@1
  int v2; // r3@1
  int v3; // r4@8
  unsigned __int8 v4; // r0@8
  int v5; // r0@8
  __int16 *v6; // r1@9
  signed __int16 v7; // r0@9
  unsigned __int8 v8; // r0@14
  int v10; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  v1 = dword_3004854;
  v2 = *(_BYTE *)(v1 + 162 + (2 * GetMultiplayerId() & 0x1FF));
  if ( !*(_BYTE *)(dword_3004854 + 111) )
  {
    if ( v2024EB7 == 2 )
    {
      if ( word_300179E & 1 )
        v0 = (-(~(unsigned __int16)word_3001798 & 0x201) | ~(unsigned __int16)word_3001798 & 0x201u) >> 31;
    }
    else if ( word_300179E & 1 )
    {
      v0 = 1;
    }
    if ( v0 )
    {
      StartSpriteAnim(
        (int)&gSprites[68 * *(_BYTE *)(dword_3004854 + 92 + *(_WORD *)(dword_3004854 + 154 + 2 * v2))],
        v2 + 4);
      v3 = *(_WORD *)(dword_3004854 + 84);
      v4 = GetMultiplayerId();
      v5 = (unsigned __int8)task_tutorial_oak_boy_girl(v3, v4);
      if ( v5 == 2 )
      {
        v6 = gSendCmd;
        v7 = 17699;
      }
      else if ( v5 == 1 )
      {
        v6 = gSendCmd;
        v7 = 21554;
      }
      else
      {
        v6 = gSendCmd;
        v7 = 9029;
      }
      v6[2] = v7;
    }
  }
  v8 = *(_BYTE *)(dword_3004854 + 126) + 1;
  *(_BYTE *)(dword_3004854 + 126) = v8;
  if ( v8 > 5u )
  {
    if ( (signed int)*(_WORD *)(dword_3004854 + 86) > 128 )
      --*(_WORD *)(dword_3004854 + 86);
    *(_BYTE *)(dword_3004854 + 126) = 0;
  }
  if ( v20297ED && word_300179E & 0x200 )
    *(_BYTE *)(dword_3004854 + 331) ^= 1u;
  return v10;
}
