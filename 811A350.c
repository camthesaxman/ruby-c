int __fastcall sub_811A350(signed int a1, __int16 a2, int a3)
{
  _WORD *v3; // r0@9
  int v5; // [sp+0h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  a3 = (unsigned __int8)a3;
  if ( (unsigned __int8)a1 == 1 )
  {
    if ( a3 )
      v3 = (_WORD *)67108886;
    else
      v3 = (_WORD *)67108884;
  }
  else if ( a1 > 1 )
  {
    if ( a1 == 2 )
    {
      if ( a3 )
        v3 = (_WORD *)67108890;
      else
        v3 = (_WORD *)67108888;
    }
    else
    {
      if ( a1 != 3 )
        return v5;
      if ( a3 )
        v3 = (_WORD *)67108894;
      else
        v3 = (_WORD *)67108892;
    }
  }
  else
  {
    if ( a1 )
      return v5;
    if ( a3 )
      v3 = (_WORD *)67108882;
    else
      v3 = (_WORD *)67108880;
  }
  *v3 = a2;
  return v5;
}
