int __fastcall sub_81248AC(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (_BYTE)a1 && a1 == 1 )
  {
    *(_BYTE *)(v2039274 + 27) = 2;
    *(_BYTE *)(v2039274 + 25) = 28;
    *(_BYTE *)(v2039274 + 26) = 20;
    *(_BYTE *)(v2039274 + 24) = 4;
    sub_812446C();
    sub_812476C();
  }
  else
  {
    *(_BYTE *)(v2039274 + 27) = 2;
    *(_BYTE *)(v2039274 + 25) = 0;
    *(_BYTE *)(v2039274 + 26) = 20;
    *(_BYTE *)(v2039274 + 24) = 12;
    sub_812446C();
    sub_81245F4();
  }
  *(_BYTE *)(v2039274 + 28) = 0;
  return v2;
}
