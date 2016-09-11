int __fastcall sub_8128A7C(unsigned __int8 a1)
{
  signed int v1; // r1@1

  v1 = 0;
  if ( v20192D0 != a1 )
  {
    do
      ++v1;
    while ( v1 <= 3 && *(_BYTE *)(v1 + 33657552) != a1 );
  }
  return (unsigned __int8)v1;
}
