int __fastcall sub_8100494(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r2@2
  int v3; // r0@2
  void **v4; // r0@3
  int v5; // r1@3
  int *v6; // r2@20
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)&gSprites[68 * v20391A8 + 54] )
  {
    v2 = &dword_3004B20[10 * a1];
    v3 = *((_WORD *)v2 + 14);
    if ( v3 == 1 )
    {
      v4 = &gUnknown_083EC96C;
      v5 = 2 * *((_WORD *)v2 + 16);
_081004EE:
      call_via_r1(v1, v4[v5]);
      return v8;
    }
    if ( v3 == 2 )
    {
      v5 = 2 * *((_WORD *)v2 + 16);
      v4 = &off_83EC970;
      goto _081004EE;
    }
    if ( (word_300179C & 0xF0) == 64 )
    {
      v20391AA = 1;
      *(_WORD *)&gSprites[68 * v20391A8 + 50] = 0;
      *(_WORD *)&gSprites[68 * v20391A8 + 52] = -2;
      --*((_WORD *)v2 + 5);
    }
    if ( (word_300179C & 0xF0) == 128 )
    {
      v20391AA = 2;
      *(_WORD *)&gSprites[68 * v20391A8 + 50] = 0;
      *(_WORD *)&gSprites[68 * v20391A8 + 52] = 2;
      ++*((_WORD *)v2 + 5);
    }
    if ( (word_300179C & 0xF0) == 32 )
    {
      v20391AA = 3;
      *(_WORD *)&gSprites[68 * v20391A8 + 50] = -2;
      *(_WORD *)&gSprites[68 * v20391A8 + 52] = 0;
      --*((_WORD *)v2 + 4);
    }
    if ( (word_300179C & 0xF0) == 16 )
    {
      v20391AA = 4;
      *(_WORD *)&gSprites[68 * v20391A8 + 50] = 2;
      *(_WORD *)&gSprites[68 * v20391A8 + 52] = 0;
      ++*((_WORD *)v2 + 4);
    }
    if ( !(sub_8100430() << 24) || !(sub_810038C(v1) << 24) )
      sub_810045C();
  }
  if ( v20391AA )
  {
    ++*(_WORD *)&gSprites[68 * v20391A8 + 54];
    *(_WORD *)&gSprites[68 * v20391A8 + 54] &= 7u;
  }
  v6 = &dword_3004B20[10 * v1];
  if ( !*((_WORD *)v6 + 14) )
  {
    if ( word_300179E & 1 )
      *((_WORD *)v6 + 14) = 1;
    if ( word_300179E & 2 )
      *((_WORD *)v6 + 14) = 2;
  }
  return v8;
}
