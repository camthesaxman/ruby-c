signed int __fastcall sub_8007E9C(char a1)
{
  signed int result; // r0@2

  if ( gLinkCallback )
  {
    result = 0;
  }
  else
  {
    gBlockRequestType = a1;
    BuildSendCmd(0xCCCCu);
    result = 1;
  }
  return result;
}
