int __fastcall sub_8123FBC(int a1)
{
  int v1; // r2@5
  char v2; // r0@5
  int v4; // [sp+0h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (_BYTE)a1 && a1 == 1 )
  {
    v4000048 = 0;
    v400004A = 0;
    v4000040 = 0;
    v4000042 = 0;
    v4000044 = 0;
    v4000046 = 0;
    if ( v202E8CC )
    {
      *(_BYTE *)(v2039274 + 20) = 96;
      *(_BYTE *)(v2039274 + 21) = -24;
      *(_BYTE *)(v2039274 + 12) = 0;
      v1 = v2039274;
      v2 = 4;
    }
    else
    {
      *(_BYTE *)(v2039274 + 20) = -80;
      *(_BYTE *)(v2039274 + 21) = 16;
      *(_BYTE *)(v2039274 + 12) = 0;
      v1 = v2039274;
      v2 = 80;
    }
    *(_BYTE *)(v1 + 13) = v2;
    *(_BYTE *)(v2039274 + 9) = 0;
    *(_BYTE *)(v2039274 + 9) = 0;
    v400001C = *(_BYTE *)(v2039274 + 20);
    v400001E = *(_BYTE *)(v2039274 + 21);
    v4000018 = 0;
    v400001A = 0;
    v4000014 = *(_BYTE *)(v2039274 + 12);
    v4000016 = *(_BYTE *)(v2039274 + 13);
    v4000010 = *(_BYTE *)(v2039274 + 8);
    v4000012 = *(_BYTE *)(v2039274 + 9);
    v4000008 = 15361;
    v400000A = 15618;
    v400000C = 15875;
    v400000E = 16128;
    v4000000 = 8000;
    v4000050 = 16128;
  }
  else
  {
    v4000048 = 0;
    v400004A = 0;
    v4000040 = 0;
    v4000042 = 0;
    v4000044 = 0;
    v4000046 = 0;
    v4000000 = 0;
    v400000E = 0;
    v400000C = 0;
    v400000A = 0;
    v4000008 = 0;
    v400001C = 0;
    v400001E = 0;
    v4000018 = 0;
    v400001A = 0;
    v4000014 = 0;
    v4000016 = 0;
    v4000010 = 0;
    v4000012 = 0;
    v4000050 = 0;
  }
  return v4;
}