int __fastcall sub_8119F88(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@4
  int v3; // r0@5
  int v4; // r4@14
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_811A324();
  sub_811A15C(v1);
  if ( v201C01B )
    --v201C01B;
  if ( !v201C01A || (v2 = v201C01A - 1, --v201C01A, v2 << 24) )
  {
    if ( v201C010 )
    {
      if ( v201C010 == 1 )
      {
        sub_811A0C0();
      }
      else if ( v201C010 > 8u )
      {
        if ( !(sub_80753E8() & 0xFF) )
        {
          ((void (*)(void))sub_811A124)();
          v201C010 = 0;
          return v6;
        }
        sub_811A0C0();
        v201C010 = 1;
      }
      v4 = 2 * (v201C010 - 1) & 0xFF;
      sub_811A1C8((8 * v201C016 + v201C011 - 2) & 0xFF, *(_BYTE *)(v4 + 0x201C000));
      sub_811A1C8((8 * v201C016 + v201C011 - 1) & 0xFF, *(_BYTE *)(v4 + 33669121));
      ++v201C010;
      return v6;
    }
    ((void (*)(void))sub_811A124)();
  }
  else
  {
    v3 = sub_811A0A0(v201C018);
    sub_811A124(v3);
  }
  return v6;
}
