signed int __fastcall GetPlayerAvatarGenderByGraphicsId(signed int a1)
{
  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == 112 )
    return 1;
  if ( a1 > 112 )
  {
    if ( a1 == 138 || a1 == 192 )
      return 1;
  }
  else if ( a1 <= 93 && a1 >= 89 )
  {
    return 1;
  }
  return 0;
}
