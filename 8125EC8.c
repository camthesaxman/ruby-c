signed int __fastcall sub_8125EC8(char a1)
{
  signed int result; // r0@2
  int v2; // r4@5

  if ( dword_3004820 == 1 )
  {
    if ( a1 && a1 == 3 )
    {
      v2 = (unsigned __int8)sub_8125B88(0x1Cu, 33677312, 0xF80u);
      if ( v2 == 1 )
        v2 = sub_8125B88(0x1Du, 33681280, 0xF80u) & 0xFF;
    }
    else
    {
      v2 = (unsigned __int8)sub_812587C(0xFFFFu, (int)&gUnknown_08401DA4);
      save_deserialize_game();
      word_3005EB8 = v2;
      dword_3005EBC = 0;
    }
    result = v2;
  }
  else
  {
    word_3005EB8 = 4;
    result = 255;
  }
  return result;
}
