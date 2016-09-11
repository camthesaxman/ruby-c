int __fastcall sub_811A6D8(char a1)
{
  int v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = (32 - a1) & 0xFF;
  if ( ((v1 - 33) & 0xFFFFu) <= 0xBE )
    LOBYTE(v1) = -32;
  v201C801 = v1;
  v201C802 = 5;
  return v3;
}
