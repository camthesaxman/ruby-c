signed int __fastcall SetUpMassOutbreakEncounter(char a1)
{
  signed int result; // r0@3
  unsigned int v2; // r5@4

  if ( a1 != 1 || sub_8085598(v2028234) << 24 )
  {
    sub_8084E78(v2028230, v2028234);
    v2 = 0;
    do
    {
      SetMonMoveSlot((int)&unk_30045C0, *(_WORD *)(2 * v2 + 0x2028238), v2);
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 <= 3 );
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
