signed int __fastcall sub_8101340(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  unsigned int i; // r6@1
  _BYTE *v3; // r1@2

  v1 = a1;
  for ( i = 0; i < v201F008; i = (i + 1) & 0xFFFF )
  {
    v3 = (_BYTE *)(v201F000 + i);
    if ( *(_BYTE *)(v201F000 + i) )
    {
      if ( *((_BYTE *)&gDecorations + 32 * *v3 + 17) == 4 )
      {
        sub_8101118(*v3, 33788340);
        if ( (unsigned __int8)sub_8101200(v1, i, 33788340) == 1 )
        {
          v20391B4 = i;
          sub_81012A0();
          v2039234 = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}
