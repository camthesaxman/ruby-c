int __fastcall sub_807DD5C(unsigned __int16 a1)
{
  unsigned __int16 v1; // r2@1
  char v2; // r0@7
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( v202FEAE != 2 )
  {
    if ( a1 == 83 )
    {
      v2 = 1;
      goto _0807DDA6;
    }
    if ( (signed int)a1 <= 83 )
    {
      if ( a1 != 81 )
        return v4;
      v2 = 2;
      goto _0807DDA6;
    }
    if ( a1 == 85 )
    {
      v2 = 0;
_0807DDA6:
      v202FEC5 = v2;
      audio_play(v1);
      return v4;
    }
  }
  return v4;
}
