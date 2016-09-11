int __fastcall MovePlayerAvatarUsingKeypadInput(unsigned __int8 a1, unsigned __int16 a2, int a3)
{
  int v4; // [sp+4h] [bp-4h]@0

  a3 = (unsigned __int16)a3;
  if ( v202E858 & 6 )
    MovePlayerOnBike(a1, a2, a3);
  else
    MovePlayerNotOnBike(a1, a3);
  return v4;
}
