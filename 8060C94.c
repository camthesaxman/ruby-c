int __fastcall FieldObjectSetRegularAnim(int result, int a2, char a3)
{
  *(_BYTE *)(result + 28) = a3;
  *(_WORD *)(a2 + 50) = 0;
  return result;
}
