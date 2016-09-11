signed int __fastcall sub_809FA94(int a1)
{
  signed int result; // r0@2

  if ( sub_8040CB4(a1) << 24 )
  {
    LoadPalette((int)&gUnknown_083C157E, 4, 2);
    result = 1;
  }
  else
  {
    LoadPalette((int)&gUnknown_083C157C, 4, 2);
    result = 0;
  }
  return result;
}
