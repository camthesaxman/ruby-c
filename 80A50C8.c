int __fastcall sub_80A50C8(unsigned __int8 a1)
{
  int v1; // r4@1
  _BYTE *v2; // r5@1
  int v3; // r0@18
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  if ( !(v202F38F & 0x80) )
  {
    if ( (unsigned __int8)sub_80A4F74(a1) == 1 )
    {
_080A526A:
      sub_808B5B4(v1);
      return v5;
    }
    if ( word_300179E & 4 && ((v2038559 - 2) & 0xFFu) > 1 && (unsigned __int8)byte_3000701 <= 1u )
    {
      if ( *((_WORD *)v2 + 10) )
      {
        if ( (unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559] == (unsigned __int8)byte_3005D10[4 * v2038559 + 2] )
        {
          sub_80A3EF4(v1);
        }
        else
        {
          audio_play(5u);
          sub_80A3E90(v1);
        }
      }
      else if ( (unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559] != (unsigned __int8)byte_3005D10[4 * v2038559 + 2] )
      {
        audio_play(5u);
        sub_80A3F50(v1);
      }
      goto _080A526A;
    }
    if ( word_300179E & 1 )
    {
      if ( (unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559] == (unsigned __int8)byte_3005D10[4 * v2038559 + 2] )
      {
        if ( *((_WORD *)v2 + 10) )
        {
          sub_80A3EF4(v1);
        }
        else
        {
          v203855E = 0;
          call_via_r1(v1, *(&off_83C16C0 + 2 * (unsigned __int8)byte_3000701));
        }
      }
      else if ( *((_WORD *)v2 + 10) )
      {
        sub_80A3E90(v1);
      }
      else
      {
        audio_play(5u);
        v2038560 = byte_3005D10[4 * v2038559] + byte_3005D10[4 * v2038559 + 1];
        v203855E = *(_WORD *)(4 * v2038560 + dword_3005D24);
        call_via_r1(v1, *(&gUnknown_083C16BC + 2 * (unsigned __int8)byte_3000701));
        sub_80F98A4(0);
        sub_80F98A4(1);
        sub_80F98A4(2);
        v3 = sub_80F98A4(3);
        sub_80A797C(v3);
      }
      goto _080A526A;
    }
    if ( word_300179E & 2 )
    {
      if ( *((_WORD *)v2 + 10) )
      {
        sub_80A3EF4(v1);
      }
      else if ( byte_3000701 != 5 )
      {
        v203855E = 0;
        call_via_r1(v1, *(&off_83C16C0 + 2 * (unsigned __int8)byte_3000701));
      }
      sub_808B5B4(v1);
    }
  }
  return v5;
}
