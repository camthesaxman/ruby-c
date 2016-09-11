signed int __fastcall sub_8125440(char a1)
{
  char v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( ProgramFlashSectorAndVerify((unsigned __int8)a1) )
  {
    sub_81251D4(0, v1);
    result = 255;
  }
  else
  {
    sub_81251D4(1, v1);
    result = 1;
  }
  return result;
}
