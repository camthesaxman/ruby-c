int __fastcall sub_814086C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int16 v5; // r10@1
  __int16 v6; // r9@1
  __int16 v7; // r8@1
  __int16 v8; // r7@1
  int v9; // r6@1
  unsigned __int8 v10; // r0@3
  int v11; // r4@3
  int *v12; // r0@3

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = 8 * a5;
  if ( GetSpriteTileStartByTag(*(_WORD *)((char *)&gUnknown_0840B258 + v9 + 6)) << 16 == -65536 )
  {
    LoadCompressedObjectPic((void **)((char *)&gUnknown_0840B258 + v9));
    LoadCompressedObjectPalette((void **)((char *)&gUnknown_0840B2B8 + v9));
  }
  v10 = CreateTask((int)*(&gUnknown_0840B384 + a5), 5);
  v11 = v10;
  v12 = &dword_3004B20[10 * v10];
  *((_WORD *)v12 + 5) = v5;
  *((_WORD *)v12 + 6) = v6;
  *((_WORD *)v12 + 7) = v7;
  *((_WORD *)v12 + 8) = v8;
  *((_WORD *)v12 + 19) = a5;
  audio_play(0xFu);
  if ( byte_3001BAD & 2 )
    ++v201784A;
  return v11;
}
