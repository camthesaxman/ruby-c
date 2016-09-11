signed int sub_80EF4F8()
{
  __int16 v0; // r3@1
  signed int result; // r0@2

  v0 = v200CE4C;
  if ( v200CE4C == v200CE4E )
  {
    result = 0;
  }
  else
  {
    v200CE4C += v200CE50;
    LoadPalette(2 * (unsigned __int16)(v0 + v200CE50) + 33607250, 49, 4);
    result = 1;
  }
  return result;
}
