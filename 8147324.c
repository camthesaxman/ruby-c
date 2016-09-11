int __fastcall sub_8147324(unsigned __int16 a1)
{
  int v1; // r6@1
  unsigned __int64 v2; // r0@1
  unsigned int v3; // r4@2
  unsigned __int16 v4; // r5@2

  v1 = a1;
  LOWORD(v2) = 0;
  do
  {
    v3 = 0;
    v4 = v2 + 1;
    do
    {
      call_via_r3(v1, v3, 0, ProgramFlashByte);
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 0xFFF );
    HIDWORD(v2) = (unsigned __int8)sub_81472E4(v1);
    LODWORD(v2) = v4;
  }
  while ( v2 <= 0x81 );
  return HIDWORD(v2);
}
