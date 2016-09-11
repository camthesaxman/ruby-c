int __fastcall sub_810C0C8(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@5
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_30017A0 & 0x40 )
  {
    if ( v2039248 )
    {
      sub_810BD64(5);
      --v2039248;
_0810C158:
      sub_810BF38(1u);
      sub_810C1C8(v1, 1);
      return v4;
    }
    if ( v2039249 )
    {
      sub_810C1C8(a1, 0);
      v2 = v2039249 - 1;
_0810C150:
      v2039249 = v2;
      sub_810BB88(v2);
      goto _0810C158;
    }
  }
  else
  {
    if ( !(word_30017A0 & 0x80) )
    {
      if ( word_300179E & 1 || word_300179E & 4 )
      {
        audio_play(5u);
        sub_810C1C8(v1, 0);
        sub_810C23C(v1);
      }
      else
      {
        if ( !(word_300179E & 2) )
          return v4;
        audio_play(5u);
        sub_810C1C8(v1, 0);
        sub_810BDAC(0);
      }
      dword_3004B20[10 * v1] = (int)sub_810BF7C;
      return v4;
    }
    if ( v2039248 != v203924B )
    {
      sub_810BD64(5);
      ++v2039248;
      goto _0810C158;
    }
    if ( v2039249 + v2039248 != v203924A )
    {
      sub_810C1C8(a1, 0);
      v2 = v2039249 + 1;
      goto _0810C150;
    }
  }
  return v4;
}
