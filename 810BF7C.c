int __fastcall sub_810BF7C(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned __int8 v3; // r0@6
  int *v4; // r0@16
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( word_30017A0 & 0x40 )
    {
      if ( v2039248 )
      {
        sub_810BD64(5);
        --v2039248;
_0810C00A:
        sub_810BF38(0);
        return v6;
      }
      if ( v2039249 )
      {
        v3 = v2039249 - 1;
_0810C002:
        v2039249 = v3;
        sub_810BB88(v3);
        goto _0810C00A;
      }
    }
    else if ( word_30017A0 & 0x80 )
    {
      if ( v2039248 != v203924B )
      {
        sub_810BD64(5);
        ++v2039248;
        goto _0810C00A;
      }
      if ( v2039249 + v2039248 != v203924A )
      {
        v3 = v2039249 + 1;
        goto _0810C002;
      }
    }
    else if ( word_300179E & 4 )
    {
      if ( v2039249 + v2039248 != v203924A )
      {
        audio_play(5u);
        sub_810BDAC(1);
        v4 = &dword_3004B20[10 * v1];
        *((_WORD *)v4 + 4) = v2039249 + v2039248;
        *v4 = (int)sub_810C0C8;
      }
    }
    else if ( word_300179E & 1 )
    {
      audio_play(5u);
      if ( v2039249 + v2039248 == v203924A )
      {
        v202E8DC = -1;
        sub_810C31C(v1);
      }
      else
      {
        sub_810C368(v1);
      }
    }
    else if ( word_300179E & 2 )
    {
      audio_play(5u);
      v202E8DC = -1;
      sub_810C31C(v2);
    }
  }
  return v6;
}
