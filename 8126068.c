signed int __fastcall unref_sub_8126068(unsigned __int8 a1)
{
  signed int result; // r0@2

  if ( ProgramFlashSectorAndVerify(a1) )
    result = 255;
  else
    result = 1;
  return result;
}
