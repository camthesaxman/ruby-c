signed int __fastcall sub_80626C0(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  signed int result; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = *(_BYTE *)(a1 + 6);
  if ( v4 == 63 )
  {
    sub_8084794(v2);
    result = 0;
  }
  else if ( ((v4 - 57) & 0xFFu) > 1 )
  {
    *(_WORD *)(a2 + 50) = 2;
    result = 1;
  }
  else
  {
    sub_812869C(v2);
    *(_WORD *)(v3 + 50) = 1;
    result = (unsigned __int8)sub_8062704(v2, v3);
  }
  return result;
}
