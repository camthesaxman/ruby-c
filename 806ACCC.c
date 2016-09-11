int __fastcall sub_806ACCC(unsigned __int8 a1)
{
  int v1; // r4@1
  _BYTE *v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r0@9
  int *v5; // r1@11
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2;
  if ( v3 <= 6 )
  {
    switch ( v3 )
    {
      case 0u:
        BeginNormalPaletteFade(-1, 1, 16, 0);
        *(_WORD *)v2 = 1;
        return v7;
      case 1u:
        if ( !(v202F38F & 0x80) )
        {
          if ( word_3005EB8 && word_3005EB8 != 2 )
          {
            RtcCalcLocalTime();
            *((_WORD *)v2 + 1) = (unsigned __int8)CreateTask(sub_806ABF4, 80);
            goto _0806ADFC;
          }
          sub_806ABDC((int)"ÎÜÙæÙ");
          *(_WORD *)v2 = 5;
        }
        return v7;
      case 2u:
        v4 = LOBYTE(dword_3004B20[10 * *((_WORD *)v2 + 1) + 1]);
        if ( v4 != 1 )
        {
          MenuZeroFillScreen(v4);
          sub_806ABDC((int)"ÊàÙÕçÙ");
          *(_DWORD *)&word_3004038 = v2024F44;
          dword_300403C = v2024F48;
          *((_WORD *)v2 + 1) = (unsigned __int8)CreateTask(sub_806AA64, 80);
          *(_WORD *)v2 = 3;
        }
        return v7;
      case 3u:
        v5 = &dword_3004B20[10 * *((_WORD *)v2 + 1)];
        if ( *((_WORD *)v5 + 4) )
        {
          if ( *((_WORD *)v5 + 5) )
          {
            DestroyTask(v2[2]);
            RtcReset();
            RtcCalcLocalTimeOffset(word_3004038, byte_300403A, byte_300403B, dword_300403C);
            v2024F44 = *(_DWORD *)&word_3004038;
            v2024F48 = dword_300403C;
            VarSet(0x4040u, word_3004038);
            sub_80691A0();
            sub_806ABDC((int)&gUnknown_08411846);
            *(_WORD *)v2 = 4;
          }
          else
          {
            DestroyTask(v2[2]);
_0806ADFC:
            *(_WORD *)v2 = 2;
          }
        }
        return v7;
      case 4u:
        if ( (unsigned __int8)sub_8125D44(0) == 1 )
        {
          sub_806ABDC((int)"ÍÕêÙ");
          audio_play(73);
        }
        else
        {
          sub_806ABDC((int)"ÍÕêÙ");
          audio_play(22);
        }
        *(_WORD *)v2 = 5;
        goto _0806AE8C;
      case 5u:
_0806AE8C:
        if ( !(word_300179E & 1) )
          return v7;
        BeginNormalPaletteFade(-1, 1, 0, 16);
        *(_WORD *)v2 = 6;
        goto _0806AEAE;
      case 6u:
_0806AEAE:
        if ( !(v202F38F & 0x80) )
        {
          DestroyTask(v1);
          DoSoftReset();
        }
        break;
      default:
        return v7;
    }
  }
  return v7;
}
