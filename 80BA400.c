signed int __fastcall sub_80BA400(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@8
  int v3; // r1@15
  int v4; // r0@17
  int *v6; // r1@29
  signed __int16 v7; // r0@34
  int *v8; // r1@38

  v1 = a1;
  if ( word_300179E & 0x100 )
  {
    dword_3004B20[10 * a1] = (int)sub_80BA800;
  }
  else if ( word_300179E & 0x200 )
  {
    dword_3004B20[10 * a1] = (int)sub_80BAF84;
  }
  else if ( word_300179E & 8 )
  {
    dword_3004B20[10 * a1] = (int)sub_80BB25C;
  }
  else
  {
    if ( word_300179E & 1 )
    {
      v2 = &dword_3004B20[10 * a1];
      if ( !*((_WORD *)v2 + 4) )
      {
        v3 = *((_WORD *)v2 + 7);
        if ( *((_WORD *)v2 + 7) )
        {
          if ( !*((_WORD *)v2 + 5) )
          {
            m4aSongNumStop((v3 + 349) & 0xFFFF);
            *((_WORD *)v2 + 7) = 0;
            return 0;
          }
          m4aSongNumStop((v3 + 349) & 0xFFFF);
          v4 = (*((_WORD *)v2 + 5) + 349) & 0xFFFF;
        }
        else
        {
          if ( !*((_WORD *)v2 + 5) )
            return 0;
          v4 = (*((_WORD *)v2 + 5) + 349) & 0xFFFF;
        }
        m4aSongNumStart(v4);
        *((_WORD *)v2 + 7) = *((_WORD *)v2 + 5);
        return 0;
      }
      if ( *((_WORD *)v2 + 8) )
      {
        if ( !*((_WORD *)v2 + 6) )
        {
          m4aSongNumStop(*((_WORD *)v2 + 8));
          *((_WORD *)v2 + 8) = 0;
          return 0;
        }
        m4aSongNumStop(*((_WORD *)v2 + 8));
      }
      else if ( !*((_WORD *)v2 + 6) )
      {
        return 0;
      }
      m4aSongNumStart(*((_WORD *)v2 + 6));
      *((_WORD *)v2 + 8) = *((_WORD *)v2 + 6);
      return 0;
    }
    if ( !(word_300179E & 2) )
    {
      if ( word_30017A0 & 0x40 || word_30017A0 & 0x80 )
      {
        LOWORD(dword_3004B20[10 * a1 + 2]) ^= 1u;
      }
      else if ( word_30017A0 & 0x10 )
      {
        v6 = &dword_3004B20[10 * a1];
        if ( *((_WORD *)v6 + 4) )
        {
          if ( (signed int)*((_WORD *)v6 + 6) <= 0 )
            *((_WORD *)v6 + 6) = 247;
          else
            --*((_WORD *)v6 + 6);
        }
        else
        {
          if ( (signed int)*((_WORD *)v6 + 5) <= 0 )
            v7 = 117;
          else
            v7 = *((_WORD *)v6 + 5) - 1;
          *((_WORD *)v6 + 5) = v7;
        }
      }
      else
      {
        if ( !(word_30017A0 & 0x20) )
        {
          v20387B0 = (word_300179C & 4) != 0;
          return 0;
        }
        v8 = &dword_3004B20[10 * a1];
        if ( *((_WORD *)v8 + 4) )
        {
          if ( (signed int)*((_WORD *)v8 + 6) > 246 )
            *((_WORD *)v8 + 6) = 0;
          else
            ++*((_WORD *)v8 + 6);
        }
        else if ( (signed int)*((_WORD *)v8 + 5) > 116 )
        {
          *((_WORD *)v8 + 5) = 0;
        }
        else
        {
          ++*((_WORD *)v8 + 5);
        }
      }
      return 1;
    }
    m4aSongNumStart(5);
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    dword_3004B20[10 * v1] = (int)sub_80BA68C;
  }
  return 0;
}
