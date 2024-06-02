local UIS = game:GetService('UserInputService')
local TWS = game:GetService('TweenService')
local TS = game:GetService('TextService')
local Mouse = game:GetService('Players').LocalPlayer:GetMouse()

local function CalculateDistance<Info...>(pointA, pointB)
	return math.sqrt(((pointB.X - pointA.X) ^ 2) + ((pointB.Y - pointA.Y) ^ 2))
end

function Create_Ripple<Effect...>(Parent : Frame)
	Parent.ClipsDescendants = true
	local ripple = Instance.new("Frame")
	local UICorner = Instance.new("UICorner")

	ripple.Active = false
	ripple.Name = "ripple"
	ripple.Parent = Parent
	ripple.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	ripple.ZIndex = Parent.ZIndex or 7
	ripple.AnchorPoint = Vector2.new(0.5, 0.5)
	ripple.Size = UDim2.new(0,0,0,0)
	ripple.SizeConstraint = Enum.SizeConstraint.RelativeYY

	UICorner.CornerRadius = UDim.new(0.25, 0)
	UICorner.Parent = ripple

	local buttonAbsoluteSize = Parent.AbsoluteSize
	local buttonAbsolutePosition = Parent.AbsolutePosition

	local mouseAbsolutePosition = Vector2.new(Mouse.X, Mouse.Y)
	local mouseRelativePosition = (mouseAbsolutePosition - buttonAbsolutePosition)

	ripple.BackgroundTransparency = 0.84
	ripple.Position = UDim2.new(0, mouseRelativePosition.X, 0, mouseRelativePosition.Y)
	ripple.Parent = Parent

	local topLeft = CalculateDistance(mouseRelativePosition, Vector2.new(0, 0))
	local topRight = CalculateDistance(mouseRelativePosition, Vector2.new(buttonAbsoluteSize.X, 0))
	local bottomRight = CalculateDistance(mouseRelativePosition, buttonAbsoluteSize)
	local bottomLeft = CalculateDistance(mouseRelativePosition, Vector2.new(0, buttonAbsoluteSize.Y))

	local Size_UP = UDim2.new(0,500,0,500)

	TWS:Create(ripple,TweenInfo.new(0.65),{Size = Size_UP,BackgroundTransparency = 1}):Play()

	game:GetService('Debris'):AddItem(ripple,2.2)
end

local Huakuay = {
	CORE_GUI = (gethui and gethui()) or game:FindFirstChild('\67\111\114\101\71\117\105') or game.Players.LocalPlayer.PlayerGui,
	Screen = UDim2.new(0.15, 250,0.15, 310),
	Icon = (function()
		local ____d,nigg = pcall(function()
			return game:HttpGet("https://raw.githubusercontent.com/evoincorp/lucideblox/master/src/modules/util/icons.json")
		end)
		
		if ____d and nigg then
			return game:GetService('HttpService'):JSONDecode(nigg).icons;
		end
		
		return {}
	end)(),
	b_function = function() end,
	HUAKUAY = {
		Tab = {
			TabButton = function()
				local TabButton = Instance.new("Frame")
				local UIAspectRatioConstraint = Instance.new("UIAspectRatioConstraint")
				local UIStroke = Instance.new("UIStroke")
				local UICorner = Instance.new("UICorner")
				local Icon = Instance.new("ImageLabel")
				local Label = Instance.new("TextLabel")
				local Description = Instance.new("TextLabel")
				local Status = Instance.new("Frame")
				local UICorner_2 = Instance.new("UICorner")
				local Button = Instance.new("TextButton")

				TabButton.Name = "TabButton"
				TabButton.BackgroundColor3 = Color3.fromRGB(40, 40, 40)
				TabButton.BorderColor3 = Color3.fromRGB(0, 0, 0)
				TabButton.BorderSizePixel = 0
				TabButton.Size = UDim2.new(0.5, 0, 0.949999988, 0)
				TabButton.ZIndex = 7

				UIAspectRatioConstraint.Parent = TabButton
				UIAspectRatioConstraint.AspectRatio = 3.250
				UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize
				UIAspectRatioConstraint.DominantAxis = Enum.DominantAxis.Height

				UIStroke.Thickness = 2.000
				UIStroke.Color = Color3.fromRGB(36, 36, 36)
				UIStroke.Parent = TabButton

				UICorner.CornerRadius = UDim.new(0, 1)
				UICorner.Parent = TabButton

				Icon.Name = "Icon"
				Icon.Parent = TabButton
				Icon.AnchorPoint = Vector2.new(0.5, 0.5)
				Icon.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Icon.BackgroundTransparency = 1.000
				Icon.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Icon.BorderSizePixel = 0
				Icon.Position = UDim2.new(0.155000001, 0, 0.5, 0)
				Icon.Size = UDim2.new(0.699999988, 0, 0.699999988, 0)
				Icon.SizeConstraint = Enum.SizeConstraint.RelativeYY
				Icon.ZIndex = 8
				Icon.Image = "rbxassetid://7743866778"
				Icon.ImageColor3 = Color3.fromRGB(255, 0, 4)
	
				
				Label.Name = "Label"
				Label.Parent = TabButton
				Label.AnchorPoint = Vector2.new(0.5, 0.5)
				Label.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Label.BackgroundTransparency = 1.000
				Label.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Label.BorderSizePixel = 0
				Label.Position = UDim2.new(0.670999944, 0, 0.299999833, 0)
				Label.Size = UDim2.new(0.678344786, 0, 0.357448339, 0)
				Label.ZIndex = 8
				Label.Font = Enum.Font.GothamBold
				Label.Text = ""
				Label.TextColor3 = Color3.fromRGB(255, 255, 255)
				Label.TextScaled = true
				Label.TextSize = 14.000
				Label.TextWrapped = true
				Label.TextXAlignment = Enum.TextXAlignment.Left
			
				Description.Name = "Description"
				Description.Parent = TabButton
				Description.AnchorPoint = Vector2.new(0.5, 0.5)
				Description.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Description.BackgroundTransparency = 1.000
				Description.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Description.BorderSizePixel = 0
				Description.Position = UDim2.new(0.670999944, 0, 0.685637951, 0)
				Description.Size = UDim2.new(0.677999973, 0, 0.275000006, 0)
				Description.ZIndex = 8
				Description.Font = Enum.Font.GothamBold
				Description.Text = ""
				Description.TextColor3 = Color3.fromRGB(255, 255, 255)
				Description.TextScaled = true
				Description.TextSize = 14.000
				Description.TextTransparency = 0.500
				Description.TextWrapped = true
				Description.TextXAlignment = Enum.TextXAlignment.Left

				Status.Name = "Status"
				Status.Parent = TabButton
				Status.AnchorPoint = Vector2.new(0.5, 0.5)
				Status.BackgroundColor3 = Color3.fromRGB(255, 0, 4)
				Status.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Status.BorderSizePixel = 0
				Status.Position = UDim2.new(0.949999988, 0, 0.150000006, 0)
				Status.Size = UDim2.new(0.200000003, 0, 0.200000003, 0)
				Status.SizeConstraint = Enum.SizeConstraint.RelativeYY
				Status.ZIndex = 8

				UICorner_2.CornerRadius = UDim.new(0.5, 0)
				UICorner_2.Parent = Status

				Button.Name = "Button"
				Button.Parent = TabButton
				Button.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Button.BackgroundTransparency = 1.000
				Button.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Button.BorderSizePixel = 0
				Button.Size = UDim2.new(1, 0, 1, 0)
				Button.ZIndex = 9
				Button.Font = Enum.Font.SourceSans
				Button.TextColor3 = Color3.fromRGB(0, 0, 0)
				Button.TextSize = 14.000
				Button.TextTransparency = 1.000
				
				return {
					TabButton = TabButton,
					UIAspectRatioConstraint = UIAspectRatioConstraint,
					UIStroke = UIStroke,
					UICorner = UICorner,
					Icon = Icon,
					Label = Label,
					Description = Description,
					Status = Status,
					UICorner_2 = UICorner_2,
					Button = Button
				}
			end,
			TabFrame = function()
				local TabFrame = Instance.new("Frame")
				local Left = Instance.new("ScrollingFrame")
				local UIListLayout = Instance.new("UIListLayout")
				local Right = Instance.new("ScrollingFrame")
				local UIListLayout_2 = Instance.new("UIListLayout")

				TabFrame.Name = "TabFrame"
				TabFrame.AnchorPoint = Vector2.new(0.5, 0.5)
				TabFrame.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				TabFrame.BackgroundTransparency = 1.000
				TabFrame.BorderColor3 = Color3.fromRGB(0, 0, 0)
				TabFrame.BorderSizePixel = 0
				TabFrame.Position = UDim2.new(0.5, 0, 0.5, 0)
				TabFrame.Size = UDim2.new(0.980000019, 0, 0.980000019, 0)
				TabFrame.ZIndex = 5

				Left.Name = "Left"
				Left.Parent = TabFrame
				Left.Active = true
				Left.AnchorPoint = Vector2.new(0.5, 0.5)
				Left.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Left.BackgroundTransparency = 1.000
				Left.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Left.BorderSizePixel = 0
				Left.ClipsDescendants = false
				Left.Position = UDim2.new(0.25, 0, 0.5, 0)
				Left.Size = UDim2.new(0.5, 0, 1, 0)
				Left.ScrollBarThickness = 0

				UIListLayout.Parent = Left
				UIListLayout.HorizontalAlignment = Enum.HorizontalAlignment.Center
				UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
				UIListLayout.Padding = UDim.new(0, 6)

				Right.Name = "Right"
				Right.Parent = TabFrame
				Right.Active = true
				Right.AnchorPoint = Vector2.new(0.5, 0.5)
				Right.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Right.BackgroundTransparency = 1.000
				Right.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Right.BorderSizePixel = 0
				Right.ClipsDescendants = false
				Right.Position = UDim2.new(0.75, 0, 0.5, 0)
				Right.Size = UDim2.new(0.5, 0, 1, 0)
				Right.ScrollBarThickness = 1

				UIListLayout_2.Parent = Right
				UIListLayout_2.HorizontalAlignment = Enum.HorizontalAlignment.Center
				UIListLayout_2.SortOrder = Enum.SortOrder.LayoutOrder
				UIListLayout_2.Padding = UDim.new(0, 6)
				
				return {
					TabFrame = TabFrame,
					Left = Left,
					Right = Right
				}
			end
		}
	}
}

function Huakuay.new(WindowName,WindowDescription,WindowIcon)
	local WindowMetatable = {
		__tabs = {},
		TabSelect = 1,
		ScreenUI = true
	}
	
	local ScreenGui = Instance.new("ScreenGui")
	local Frame = Instance.new("Frame")
	local UIStroke = Instance.new("UIStroke")
	local DropShadow = Instance.new("ImageLabel")
	local Header = Instance.new("Frame")
	local Logo = Instance.new("ImageLabel")
	local DropShadow2 = Instance.new("ImageLabel")
	local TitleLabel = Instance.new("TextLabel")
	local DescriptLabel = Instance.new("TextLabel")
	local Frame_2 = Instance.new("Frame")
	local UIGradient = Instance.new("UIGradient")
	local TabButtonFrame = Instance.new("Frame")
	local TabButtons = Instance.new("ScrollingFrame")
	local UIListLayout = Instance.new("UIListLayout")
	local Tabs = Instance.new("Frame")

	ScreenGui.Parent = Huakuay.CORE_GUI
	ScreenGui.ResetOnSpawn = false
	ScreenGui.ZIndexBehavior = Enum.ZIndexBehavior.Global
	ScreenGui.IgnoreGuiInset = true
	
	Frame.Parent = ScreenGui
	Frame.AnchorPoint = Vector2.new(0.5, 0.5)
	Frame.BackgroundColor3 = Color3.fromRGB(35, 35, 35)
	Frame.BorderColor3 = Color3.fromRGB(0, 0, 0)
	Frame.BorderSizePixel = 0
	Frame.Position = UDim2.new(0.5, 0, 0.5, 0)
	Frame.Size = Huakuay.Screen
	
	Frame.BackgroundTransparency = 1
	TWS:Create(Frame,TweenInfo.new(1.1),{BackgroundTransparency = 0}):Play()
	
	
	UIStroke.Thickness = 2.000
	UIStroke.Color = Color3.fromRGB(43, 43, 43)
	UIStroke.Parent = Frame
	
	DropShadow.Name = "DropShadow"
	DropShadow.Parent = Frame
	DropShadow.AnchorPoint = Vector2.new(0.5, 0.5)
	DropShadow.BackgroundTransparency = 1.000
	DropShadow.BorderSizePixel = 0
	DropShadow.Position = UDim2.new(0.5, 0, 0.5, 0)
	DropShadow.Size = UDim2.new(1, 47, 1, 47)
	DropShadow.ZIndex = 0
	DropShadow.Image = "rbxassetid://6014261993"
	DropShadow.ImageColor3 = Color3.fromRGB(0, 0, 0)
	DropShadow.ImageTransparency = 1
	DropShadow.ScaleType = Enum.ScaleType.Slice
	DropShadow.SliceCenter = Rect.new(49, 49, 450, 450)
	TWS:Create(DropShadow,TweenInfo.new(1),{ImageTransparency = 0.500}):Play()
	
	Header.Name = "Header"
	Header.Parent = Frame
	Header.BackgroundColor3 = Color3.fromRGB(45, 45, 45)
	Header.BorderColor3 = Color3.fromRGB(0, 0, 0)
	Header.BorderSizePixel = 0
	Header.Position = UDim2.new(0, 0, 3.91451742e-08, 0)
	Header.Size = UDim2.new(1, 0, 0.183088794, 0)
	Header.ZIndex = 5
	
	Header.BackgroundTransparency = 1
	TWS:Create(Header,TweenInfo.new(1.1),{BackgroundTransparency = 0}):Play()

	Logo.Name = "Logo"
	Logo.Parent = Header
	Logo.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	Logo.BackgroundTransparency = 1.000
	Logo.BorderColor3 = Color3.fromRGB(0, 0, 0)
	Logo.BorderSizePixel = 0
	Logo.Position = UDim2.new(0.00999999978, 0, 0.0350000001, 0)
	Logo.Size = UDim2.new(0.400000006, 0, 0.400000006, 0)
	Logo.SizeConstraint = Enum.SizeConstraint.RelativeYY
	Logo.ZIndex = 5
	Logo.Image = WindowIcon or "http://www.roblox.com/asset/?id=17702123964"
	Logo.ImageColor3 = Color3.fromRGB(255, 0, 4)
	Logo.ImageTransparency = 1
	TWS:Create(Logo,TweenInfo.new(1.2),{ImageTransparency = 0}):Play()

	DropShadow2.Name = "DropShadow2"
	DropShadow2.Parent = Header
	DropShadow2.AnchorPoint = Vector2.new(0.5, 0.5)
	DropShadow2.BackgroundTransparency = 1.000
	DropShadow2.BorderSizePixel = 0
	DropShadow2.Position = UDim2.new(0.5, 0, 0.5, 0)
	DropShadow2.Size = UDim2.new(1, 47, 1, 47)
	DropShadow2.ZIndex = 4
	DropShadow2.Image = "rbxassetid://6014261993"
	DropShadow2.ImageColor3 = Color3.fromRGB(0, 0, 0)
	DropShadow2.ImageTransparency = 1
	DropShadow2.ScaleType = Enum.ScaleType.Slice
	DropShadow2.SliceCenter = Rect.new(49, 49, 450, 450)
	TWS:Create(DropShadow2,TweenInfo.new(1),{ImageTransparency = 0.500}):Play()

	TitleLabel.Name = "TitleLabel"
	TitleLabel.Parent = Header
	TitleLabel.AnchorPoint = Vector2.new(0.5, 0.5)
	TitleLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	TitleLabel.BackgroundTransparency = 1.000
	TitleLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
	TitleLabel.BorderSizePixel = 0
	TitleLabel.Position = UDim2.new(0.547999978, 0, 0.150000006, 0)
	TitleLabel.Size = UDim2.new(0.889999986, 0, 0.228, 0)
	TitleLabel.ZIndex = 6
	TitleLabel.Font = Enum.Font.SourceSansBold
	TitleLabel.Text = WindowName or "BEDOL HUB"
	TitleLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
	TitleLabel.TextScaled = true
	TitleLabel.TextSize = 14.000
	TitleLabel.TextWrapped = true
	TitleLabel.TextXAlignment = Enum.TextXAlignment.Left
	TitleLabel.TextTransparency = 1
	TWS:Create(TitleLabel,TweenInfo.new(1.3),{TextTransparency = 0}):Play()

	DescriptLabel.Name = "DescriptLabel"
	DescriptLabel.Parent = Header
	DescriptLabel.AnchorPoint = Vector2.new(0.5, 0.5)
	DescriptLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	DescriptLabel.BackgroundTransparency = 1.000
	DescriptLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
	DescriptLabel.BorderSizePixel = 0
	DescriptLabel.Position = UDim2.new(0.547999978, 0, 0.342000008, 0)
	DescriptLabel.Size = UDim2.new(0.889999986, 0, 0.150000006, 0)
	DescriptLabel.ZIndex = 6
	DescriptLabel.Font = Enum.Font.SourceSansBold
	DescriptLabel.Text = WindowDescription
	DescriptLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
	DescriptLabel.TextScaled = true
	DescriptLabel.TextSize = 14.000
	DescriptLabel.TextTransparency = 0.500
	DescriptLabel.TextWrapped = true
	DescriptLabel.TextXAlignment = Enum.TextXAlignment.Left
	DescriptLabel.TextTransparency = 1
	TWS:Create(DescriptLabel,TweenInfo.new(1.4),{TextTransparency = 0.5}):Play()

	Frame_2.Parent = Header
	Frame_2.AnchorPoint = Vector2.new(1, 0)
	Frame_2.BackgroundColor3 = Color3.fromRGB(108, 108, 108)
	Frame_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
	Frame_2.BorderSizePixel = 0
	Frame_2.Position = UDim2.new(1, 0, 0, 0)
	Frame_2.Size = UDim2.new(0.00999999978, 0, 1, 0)
	Frame_2.ZIndex = 5
	Frame_2.BackgroundTransparency = 1
	TWS:Create(Frame_2,TweenInfo.new(1.5),{BackgroundTransparency = 0}):Play()

	UIGradient.Transparency = NumberSequence.new{NumberSequenceKeypoint.new(0.00, 1.00), NumberSequenceKeypoint.new(1.00, 0.00)}
	UIGradient.Parent = Frame_2

	TabButtonFrame.Name = "TabButtonFrame"
	TabButtonFrame.Parent = Header
	TabButtonFrame.AnchorPoint = Vector2.new(0.5, 0.5)
	TabButtonFrame.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	TabButtonFrame.BackgroundTransparency = 1.000
	TabButtonFrame.BorderColor3 = Color3.fromRGB(0, 0, 0)
	TabButtonFrame.BorderSizePixel = 0
	TabButtonFrame.ClipsDescendants = true
	TabButtonFrame.Position = UDim2.new(0.5, 0, 0.699999988, 0)
	TabButtonFrame.Size = UDim2.new(0.964999974, 0, 0.479999989, 0)
	TabButtonFrame.ZIndex = 6
	
	
	TabButtons.Name = "TabButtons"
	TabButtons.Parent = TabButtonFrame
	TabButtons.Active = true
	TabButtons.AnchorPoint = Vector2.new(0.5, 0.5)
	TabButtons.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
	TabButtons.BackgroundTransparency = 1.000
	TabButtons.BorderColor3 = Color3.fromRGB(0, 0, 0)
	TabButtons.BorderSizePixel = 0
	TabButtons.ClipsDescendants = false
	TabButtons.Position = UDim2.new(0.5, 0, 0.5, 0)
	TabButtons.Size = UDim2.new(0.970000029, 0, 0.970000029, 0)
	TabButtons.ZIndex = 7
	TabButtons.CanvasSize = UDim2.new(2, 0, 0, 0)
	TabButtons.ScrollBarThickness = 0

	UIListLayout.Parent = TabButtons
	UIListLayout.FillDirection = Enum.FillDirection.Horizontal
	UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
	UIListLayout.VerticalAlignment = Enum.VerticalAlignment.Center
	UIListLayout.Padding = UDim.new(0, 8)

	Tabs.Name = "Tabs"
	Tabs.Parent = Frame
	Tabs.AnchorPoint = Vector2.new(0.5, 0.5)
	Tabs.BackgroundColor3 = Color3.fromRGB(29, 29, 29)
	Tabs.BackgroundTransparency = 1.000
	Tabs.BorderColor3 = Color3.fromRGB(0, 0, 0)
	Tabs.BorderSizePixel = 0
	Tabs.ClipsDescendants = true
	Tabs.Position = UDim2.new(0.5, 0, 0.59154439, 0)
	Tabs.Size = UDim2.new(1, 0, 0.816911221, 0)
	Tabs.ZIndex = 2
	
	function WindowMetatable:NewTab(TabName,TabDesc,TabIcon)
		local TabMetatable = {}
		local Button = Huakuay.HUAKUAY.Tab.TabButton()
		local TabFrame = Huakuay.HUAKUAY.Tab.TabFrame()

		Button.Label.Text = TabName
		Button.Description.Text = TabDesc or "-"
		Button.Icon.Image = Huakuay.Icon[TabIcon] or TabIcon
		Button.TabButton.Parent = TabButtons
		
		TabFrame.TabFrame.Name = TabName
		TabFrame.TabFrame.Parent = Tabs
		local MyTabNumber = #WindowMetatable.__tabs + 1
		
		local Right = UDim2.new(1.55, 0, 0.5, 0)
		local Left = UDim2.new(-1.25, 0, 0.5, 0)
		
		TabFrame.TabFrame:GetPropertyChangedSignal('Position'):Connect(function()
			if TabFrame.TabFrame.Position == Left or TabFrame.TabFrame.Position == Right then
				TabFrame.TabFrame.Visible = false
			else
				TabFrame.TabFrame.Visible = true
			end
		end)
		
		local function __toggle(val)
			if val then
				TWS:Create(Button.Status,TweenInfo.new(0.15),{BackgroundTransparency = 0,Size = UDim2.fromScale(0.2,0.2)}):Play()
				TWS:Create(Button.Icon,TweenInfo.new(0.2),{ImageTransparency = 0}):Play()
				TWS:Create(Button.Label,TweenInfo.new(0.3),{TextTransparency = 0}):Play()
				TWS:Create(Button.Description,TweenInfo.new(0.4),{TextTransparency = 0.5}):Play()
				TWS:Create(TabFrame.TabFrame,TweenInfo.new(0.4),{Position = UDim2.new(0.5, 0, 0.5, 0)}):Play()
				TWS:Create(TabFrame.TabFrame,TweenInfo.new(0.7),{Size = UDim2.new(0.980000019, 0, 0.980000019, 0)}):Play()
			else
				
				if 	WindowMetatable.TabSelect < MyTabNumber then
					TWS:Create(TabFrame.TabFrame,TweenInfo.new(0.4),{Position = Right}):Play()
				else
					TWS:Create(TabFrame.TabFrame,TweenInfo.new(0.4),{Position = Left}):Play()
				end
				
				TWS:Create(TabFrame.TabFrame,TweenInfo.new(0.1),{Size = UDim2.new(0.930000019, 0, 0.930000019, 0)}):Play()
				TWS:Create(Button.Description,TweenInfo.new(0.4),{TextTransparency = 0.6}):Play()
				TWS:Create(Button.Label,TweenInfo.new(0.3),{TextTransparency = 0.55}):Play()
				TWS:Create(Button.Icon,TweenInfo.new(0.2),{ImageTransparency = 0.35}):Play()
				TWS:Create(Button.Status,TweenInfo.new(0.15),{BackgroundTransparency = 1,Size = UDim2.fromScale(0,0)}):Play()
			end
		end
		
		if not WindowMetatable.__tabs[1] then
			__toggle(true)
		else
			TabFrame.TabFrame.Visible = false
			
			if 	WindowMetatable.TabSelect < MyTabNumber then
				TabFrame.TabFrame.Position = Right
			else
				TabFrame.TabFrame.Position = Left
			end
			
			__toggle(false)
		end
		
		table.insert(WindowMetatable.__tabs,{
			__callback = __toggle,
			TabFrame = TabFrame.TabFrame
		})
		
		task.spawn(function()
			local dela = tick()
			while true do task.wait(math.random())
				if WindowMetatable.ScreenUI then
					if tick() > dela and WindowMetatable.TabSelect == MyTabNumber then
						dela = tick() + 1
						__toggle(true)
					else
						if WindowMetatable.TabSelect ~= MyTabNumber then
							if tick() > dela then
								dela = tick() + 1
								__toggle(false)
							end
						end
					end
				end
			end
		end)
		Button.Button.MouseButton1Click:Connect(function()
			Create_Ripple(Button.TabButton)
			
			WindowMetatable.TabSelect = MyTabNumber
			
			for i,v in pairs(WindowMetatable.__tabs) do
				if v.TabFrame == TabFrame.TabFrame then
				
					v.__callback(true)
					
				else
					v.__callback(false)
				end
			end
		end)
		
		function TabMetatable.__dex(LEFT_TIGHT:ScrollingFrame)
			local UIListLayout:UIListLayout = LEFT_TIGHT:WaitForChild('UIListLayout')
			
			UIListLayout:GetPropertyChangedSignal('AbsoluteContentSize'):Connect(function()
				LEFT_TIGHT.CanvasSize = UDim2.new(0,0,0,UIListLayout.AbsoluteContentSize.Y + 5)
			end)
			
			local metatable = {}
			
			function metatable:NewLabel(LabelName)
				local Label = Instance.new("Frame")
				local UIAspectRatioConstraint = Instance.new("UIAspectRatioConstraint")
				local UIStroke = Instance.new("UIStroke")
				local Label_2 = Instance.new("TextLabel")
				local Icon = Instance.new("ImageLabel")

				Label.Name = "Label"
				Label.Parent = LEFT_TIGHT
				Label.BackgroundColor3 = Color3.fromRGB(25, 25, 25)
				Label.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Label.BorderSizePixel = 0
				Label.ClipsDescendants = true
				Label.Size = UDim2.new(1, 0, 0.899999976, 0)
				
				Label.BackgroundTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Label,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				
				
				UIAspectRatioConstraint.Parent = Label
				UIAspectRatioConstraint.AspectRatio = 11.000
				UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize

				UIStroke.Color = Color3.fromRGB(43, 43, 43)
				UIStroke.Parent = Label
				
				UIStroke.Transparency = 1

				task.delay(0.5,function()
					TWS:Create(UIStroke,TweenInfo.new(0.55),{Transparency = 0}):Play()
				end)
				
				Label_2.Name = "Label"
				Label_2.Parent = Label
				Label_2.AnchorPoint = Vector2.new(0.5, 0.5)
				Label_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Label_2.BackgroundTransparency = 1.000
				Label_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Label_2.BorderSizePixel = 0
				Label_2.Position = UDim2.new(0.5, 0, 0.5, 0)
				Label_2.Size = UDim2.new(0.949999988, 0, 0.5, 0)
				Label_2.Font = Enum.Font.GothamBold
				Label_2.Text = LabelName or "Label Function"
				Label_2.TextColor3 = Color3.fromRGB(252, 252, 252)
				Label_2.TextScaled = true
				Label_2.TextSize = 14.000
				Label_2.TextWrapped = true
				Label_2.TextXAlignment = Enum.TextXAlignment.Left
				
				Label_2.TextTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Label_2,TweenInfo.new(0.55),{TextTransparency = 0.25}):Play()
				end)
				
				Icon.Name = "Icon"
				Icon.Parent = Label
				Icon.AnchorPoint = Vector2.new(1, 0.5)
				Icon.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Icon.BackgroundTransparency = 1.000
				Icon.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Icon.BorderSizePixel = 0
				Icon.Position = UDim2.new(1, 0, 0.5, 0)
				Icon.Size = UDim2.new(0.899999976, 0, 0.899999976, 0)
				Icon.SizeConstraint = Enum.SizeConstraint.RelativeYY
				Icon.ZIndex = 9
				Icon.Image = "rbxassetid://7733993211"
				Icon.ImageTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Icon,TweenInfo.new(0.55),{ImageTransparency = 0}):Play()
				end)
				
				return {
					edit = function(t)
						Label_2.Text = t or "Label Function"
					end,
					delete = function()
						Label:Destroy()
					end,
				}
			end
			
			function metatable:NewToggle(ToggleName,Default,callback)
				callback = callback or Huakuay.b_function
				
				local Toggle = Instance.new("Frame")
				local UIAspectRatioConstraint = Instance.new("UIAspectRatioConstraint")
				local UIStroke = Instance.new("UIStroke")
				local UICorner = Instance.new("UICorner")
				local Label = Instance.new("TextLabel")
				local UIGradient = Instance.new("UIGradient")
				local Icon = Instance.new("Frame")
				local UICorner_2 = Instance.new("UICorner")
				local TurnOn = Instance.new("Frame")
				local UICorner_3 = Instance.new("UICorner")
				local UIGradient_2 = Instance.new("UIGradient")
				local Icon_2 = Instance.new("ImageLabel")
				local Button = Instance.new("TextButton")
				
				Toggle.Name = "Toggle"
				Toggle.Parent = LEFT_TIGHT
				Toggle.BackgroundColor3 = Color3.fromRGB(25, 25, 25)
				Toggle.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Toggle.BorderSizePixel = 0
				Toggle.ClipsDescendants = true
				Toggle.Size = UDim2.new(0.970000029, 0, 0.899999976, 0)
				Toggle.BackgroundTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Toggle,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)

				UIAspectRatioConstraint.Parent = Toggle
				UIAspectRatioConstraint.AspectRatio = 8.000
				UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize

				UIStroke.Thickness = 1.500
				UIStroke.Color = Color3.fromRGB(18, 18, 18)
				UIStroke.Parent = Toggle
				
				UIStroke.Transparency = 1

				task.delay(0.5,function()
					TWS:Create(UIStroke,TweenInfo.new(0.55),{Transparency = 0}):Play()
				end)
				
				
				UICorner.CornerRadius = UDim.new(0, 2)
				UICorner.Parent = Toggle

				Label.Name = "Label"
				Label.Parent = Toggle
				Label.AnchorPoint = Vector2.new(0.5, 0.5)
				Label.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Label.BackgroundTransparency = 1.000
				Label.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Label.BorderSizePixel = 0
				Label.Position = UDim2.new(0.549679101, 0, 0.5, 0)
				Label.Size = UDim2.new(0.850641727, 0, 0.5, 0)
				Label.Font = Enum.Font.GothamBold
				Label.Text = ToggleName or "Toggle Function"
				Label.TextColor3 = Color3.fromRGB(252, 252, 252)
				Label.TextScaled = true
				Label.TextSize = 14.000
				Label.TextWrapped = true
				Label.TextXAlignment = Enum.TextXAlignment.Left
				Label.TextTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Label,TweenInfo.new(0.55),{TextTransparency = 0}):Play()
				end)

				UIGradient.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 255, 255)), ColorSequenceKeypoint.new(0.64, Color3.fromRGB(206, 206, 206)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(134, 134, 134))}
				UIGradient.Rotation = 90
				UIGradient.Parent = Label

				Icon.Name = "Icon"
				Icon.Parent = Toggle
				Icon.AnchorPoint = Vector2.new(0, 0.5)
				Icon.BackgroundColor3 = Color3.fromRGB(49, 49, 49)
				Icon.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Icon.BorderSizePixel = 0
				Icon.Position = UDim2.new(0.0250000004, 0, 0.5, 0)
				Icon.Size = UDim2.new(0.600000024, 0, 0.600000024, 0)
				Icon.SizeConstraint = Enum.SizeConstraint.RelativeYY
				Icon.ZIndex = 7
				Icon.BackgroundTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Icon,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)

				UICorner_2.CornerRadius = UDim.new(0, 2)
				UICorner_2.Parent = Icon

				TurnOn.Name = "TurnOn"
				TurnOn.Parent = Icon
				TurnOn.AnchorPoint = Vector2.new(0.5, 0.5)
				TurnOn.BackgroundColor3 = Color3.fromRGB(255, 0, 4)
				TurnOn.BorderColor3 = Color3.fromRGB(0, 0, 0)
				TurnOn.BorderSizePixel = 0
				TurnOn.Position = UDim2.new(0.5, 0, 0.5, 0)
				TurnOn.Size = UDim2.new(1, 0, 1, 0)
				TurnOn.ZIndex = 8
				TurnOn.BackgroundTransparency = 1

				task.delay(0.5,function()
					TWS:Create(TurnOn,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				
				UICorner_3.CornerRadius = UDim.new(0, 4)
				UICorner_3.Parent = TurnOn

				UIGradient_2.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(216, 216, 216)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(125, 125, 125))}
				UIGradient_2.Rotation = 90
				UIGradient_2.Parent = TurnOn

				Icon_2.Name = "Icon"
				Icon_2.Parent = Icon
				Icon_2.AnchorPoint = Vector2.new(0.5, 0.5)
				Icon_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Icon_2.BackgroundTransparency = 1.000
				Icon_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Icon_2.BorderSizePixel = 0
				Icon_2.Position = UDim2.new(0.5, 0, 0.5, 0)
				Icon_2.Size = UDim2.new(1, 0, 1, 0)
				Icon_2.SizeConstraint = Enum.SizeConstraint.RelativeYY
				Icon_2.ZIndex = 9
				Icon_2.Image = "rbxassetid://7733715400"
				
				
				if Default then
					Icon_2.ImageTransparency = 1

					task.delay(0.5,function()
						TWS:Create(Icon_2,TweenInfo.new(0.55),{ImageTransparency = 0}):Play()
					end)
				end
				
				Button.Name = "Button"
				Button.Parent = Toggle
				Button.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Button.BackgroundTransparency = 1.000
				Button.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Button.BorderSizePixel = 0
				Button.Size = UDim2.new(1, 0, 1, 0)
				Button.ZIndex = 20
				Button.Font = Enum.Font.SourceSans
				Button.TextColor3 = Color3.fromRGB(0, 0, 0)
				Button.TextSize = 14.000
				Button.TextTransparency = 1.000
				
				local function __toggle_interface(val)
					if val then
						TWS:Create(Icon_2,TweenInfo.new(0.3),{ImageTransparency = 0}):Play()
						TWS:Create(TurnOn,TweenInfo.new(0.15),{Size = UDim2.fromScale(1,1)}):Play()
						TWS:Create(Label,TweenInfo.new(0.3),{TextTransparency = 0}):Play()

					else
						TWS:Create(Label,TweenInfo.new(0.3),{TextTransparency = 0.25}):Play()
						TWS:Create(Icon_2,TweenInfo.new(0.15),{ImageTransparency = 1}):Play()
						TWS:Create(TurnOn,TweenInfo.new(0.3),{Size = UDim2.fromScale(0,0)}):Play()
						
					end
				end
				
				__toggle_interface(Default)
				
				Button.MouseButton1Click:Connect(function()
					Create_Ripple(Toggle)
					Default = not Default
					__toggle_interface(Default)
					callback(Default)
					
				end)
				
				return {
					edit = function(t)
						Label.Text = t or "Label Function"
					end,
					set = function(v)
						Default = v
						__toggle_interface(v)
					end,
					delete = function()
						Label:Destroy()
					end,
				}
			end
			
			function metatable:NewSlider(SliderName,Config,callback)
				Config = Config or {}
				Config.Min = Config.Min or 1
				Config.Max = Config.Max or 100
				Config.Default = Config.Default or Config.Min
				Config.Type = Config.Type or "%"

				local Slider = Instance.new("Frame")
				local UIAspectRatioConstraint = Instance.new("UIAspectRatioConstraint")
				local UIStroke = Instance.new("UIStroke")
				local UICorner = Instance.new("UICorner")
				local Label = Instance.new("TextLabel")
				local UIGradient = Instance.new("UIGradient")
				local Slide = Instance.new("Frame")
				local UIGradient_2 = Instance.new("UIGradient")
				local Movement = Instance.new("Frame")
				local UICorner_2 = Instance.new("UICorner")
				local Stick = Instance.new("Frame")
				local UICorner_3 = Instance.new("UICorner")
				local UIStroke_2 = Instance.new("UIStroke")
				local Value = Instance.new("TextLabel")
				local UIGradient_3 = Instance.new("UIGradient")

				Slider.Name = "Slider"
				Slider.Parent = LEFT_TIGHT
				Slider.BackgroundColor3 = Color3.fromRGB(25, 25, 25)
				Slider.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Slider.BorderSizePixel = 0
				Slider.ClipsDescendants = true
				Slider.Size = UDim2.new(0.970000029, 0, 0.899999976, 0)
				Slider.BackgroundTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Slider,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				
				UIAspectRatioConstraint.Parent = Slider
				UIAspectRatioConstraint.AspectRatio = 6.000
				UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize

				UIStroke.Thickness = 1.500
				UIStroke.Color = Color3.fromRGB(18, 18, 18)
				UIStroke.Parent = Slider
				UIStroke.Transparency = 1


				task.delay(0.5,function()
					TWS:Create(UIStroke,TweenInfo.new(0.55),{Transparency = 0}):Play()
				end)
				UICorner.CornerRadius = UDim.new(0, 2)
				UICorner.Parent = Slider

				Label.Name = "Label"
				Label.Parent = Slider
				Label.AnchorPoint = Vector2.new(1, 0.5)
				Label.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Label.BackgroundTransparency = 1.000
				Label.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Label.BorderSizePixel = 0
				Label.Position = UDim2.new(0.879999995, 0, 0.275000006, 0)
				Label.Size = UDim2.new(0.851000011, 0, 0.368900001, 0)
				Label.Font = Enum.Font.GothamBold
				Label.Text = SliderName or "Slider Function"
				Label.TextColor3 = Color3.fromRGB(252, 252, 252)
				Label.TextScaled = true
				Label.TextSize = 14.000
				Label.TextWrapped = true
				Label.TextXAlignment = Enum.TextXAlignment.Left
				Label.TextTransparency = 1
			

				task.delay(0.5,function()
					TWS:Create(Label,TweenInfo.new(0.55),{TextTransparency = 0.25}):Play()
				end)

				UIGradient.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 255, 255)), ColorSequenceKeypoint.new(0.64, Color3.fromRGB(206, 206, 206)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(134, 134, 134))}
				UIGradient.Rotation = 90
				UIGradient.Parent = Label

				Slide.Name = "Slide"
				Slide.Parent = Slider
				Slide.AnchorPoint = Vector2.new(0.5, 0.5)
				Slide.BackgroundColor3 = Color3.fromRGB(222, 0, 4)
				Slide.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Slide.BorderSizePixel = 0
				Slide.ClipsDescendants = true
				Slide.Position = UDim2.new(0.5, 0, 0.670000017, 0)
				Slide.Size = UDim2.new(0.949999988, 0, 0.300000012, 0)
				Slide.BackgroundTransparency = 1


				task.delay(0.5,function()
					TWS:Create(Slide,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				
				UIGradient_2.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(212, 212, 212)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(125, 125, 125))}
				UIGradient_2.Rotation = 90
				UIGradient_2.Parent = Slide

				Movement.Name = "Movement"
				Movement.Parent = Slide
				Movement.AnchorPoint = Vector2.new(0, 0.5)
				Movement.BackgroundColor3 = Color3.fromRGB(45, 45, 45)
				Movement.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Movement.BorderSizePixel = 0
				Movement.Position = UDim2.new(0, 0, 0.5, 0)
				Movement.Size = UDim2.new(0.5, 0, 1, 0)
				Movement.BackgroundTransparency = 1


				task.delay(0.5,function()
					TWS:Create(Movement,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				UICorner_2.CornerRadius = UDim.new(0, 1)
				UICorner_2.Parent = Movement

				Stick.Name = "Stick"
				Stick.Parent = Movement
				Stick.AnchorPoint = Vector2.new(1, 0)
				Stick.BackgroundColor3 = Color3.fromRGB(97, 97, 97)
				Stick.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Stick.BorderSizePixel = 0
				Stick.Position = UDim2.new(1.00999999, 0, 0, 0)
				Stick.Size = UDim2.new(0.00999999978, 0, 1, 0)
				Stick.BackgroundTransparency = 1


				task.delay(0.5,function()
					TWS:Create(Stick,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				UICorner_3.CornerRadius = UDim.new(0, 2)
				UICorner_3.Parent = Slide

				UIStroke_2.Thickness = 1.500
				UIStroke_2.Color = Color3.fromRGB(18, 18, 18)
				UIStroke_2.Parent = Slide
				UIStroke_2.Transparency = 1


				task.delay(0.5,function()
					TWS:Create(UIStroke_2,TweenInfo.new(0.55),{Transparency = 0}):Play()
				end)
				
				Value.Name = "Value"
				Value.Parent = Slider
				Value.AnchorPoint = Vector2.new(1, 0.5)
				Value.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Value.BackgroundTransparency = 1.000
				Value.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Value.BorderSizePixel = 0
				Value.Position = UDim2.new(0.972187996, 0, 0.274999678, 0)
				Value.Size = UDim2.new(0.510999978, 0, 0.300000012, 0)
				Value.Font = Enum.Font.GothamBold
				Value.Text = tostring(Config.Default).."/"..tostring(Config.Max).." "..tostring(Config.Type or "%")
				Value.TextColor3 = Color3.fromRGB(252, 252, 252)
				Value.TextScaled = true
				Value.TextSize = 14.000
				Value.TextTransparency = 0.500
				Value.TextWrapped = true
				Value.TextXAlignment = Enum.TextXAlignment.Right
				Value.TextTransparency = 1


				task.delay(0.5,function()
					TWS:Create(Value,TweenInfo.new(0.55),{TextTransparency = 0}):Play()
				end)
				UIGradient_3.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 255, 255)), ColorSequenceKeypoint.new(0.64, Color3.fromRGB(206, 206, 206)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(134, 134, 134))}
				UIGradient_3.Rotation = 90
				UIGradient_3.Parent = Value
				
				TWS:Create(Movement,TweenInfo.new(0.1),{Size = UDim2.fromScale((Config.Default / Config.Max), 1)}):Play()
				
				local IsHold = false
				local function update(Input)
					local SizeScale = math.clamp((((Input.Position.X) - Slide.AbsolutePosition.X) / Slide.AbsoluteSize.X), 0, 1)
					local Valuea = math.floor(((Config.Max - Config.Min) * SizeScale) + Config.Min)
					local Size = UDim2.fromScale(math.clamp(SizeScale,0,1), 1)
					Config.Default = Valuea
					Value.Text = tostring(Config.Default).."/"..tostring(Config.Max).." "..tostring(Config.Type or "%")
					TWS:Create(Movement,TweenInfo.new(0.1),{Size = Size}):Play()
					callback(Valuea)
				end

				Slide.InputBegan:Connect(function(Input)
					if Input.UserInputType == Enum.UserInputType.MouseButton1 or Input.UserInputType == Enum.UserInputType.Touch then
						IsHold = true
						update(Input)
						TWS:Create(Label,TweenInfo.new(0.1),{TextTransparency = 0}):Play()
						TWS:Create(Value,TweenInfo.new(0.1),{TextTransparency = 0.1}):Play()
					end
				end)

				Slide.InputEnded:Connect(function(Input)
					if Input.UserInputType == Enum.UserInputType.MouseButton1 or Input.UserInputType == Enum.UserInputType.Touch then
						IsHold = false
						TWS:Create(Label,TweenInfo.new(0.1),{TextTransparency = 0.25}):Play()
						TWS:Create(Value,TweenInfo.new(0.1),{TextTransparency = 0.5}):Play()
					end
				end)

				UIS.InputChanged:Connect(function(Input)
					if IsHold then
						if (Input.UserInputType==Enum.UserInputType.MouseMovement or Input.UserInputType==Enum.UserInputType.Touch)  then
							update(Input)
						end
					end
				end)
				
				return {
					edit = function(t)
						Label.Text = t or "Label Function"
					end,
					set = function(v)
						Config.Default = v
						Value.Text = tostring(Config.Default).."/"..tostring(Config.Max).." "..tostring(Config.Type or "%")
						TWS:Create(Movement,TweenInfo.new(0.1),{Size = UDim2.fromScale((Config.Default / Config.Max), 1)}):Play()

					end,
					delete = function()
						Label:Destroy()
					end,
				}
			end
			
			function metatable:NewKeybind(KrybindName,Default,callback)
				callback = callback or Huakuay.b_function
				
				local Keybind = Instance.new("Frame")
				local UIAspectRatioConstraint = Instance.new("UIAspectRatioConstraint")
				local UIStroke = Instance.new("UIStroke")
				local UICorner = Instance.new("UICorner")
				local UIListLayout = Instance.new("UIListLayout")
				local _SPACE = Instance.new("Frame")
				local Target = Instance.new("Frame")
				local UICorner_2 = Instance.new("UICorner")
				local KeybindText = Instance.new("TextLabel")
				local Button = Instance.new("TextButton")
				local Label = Instance.new("TextLabel")
				local UIGradient = Instance.new("UIGradient")

				Keybind.Name = "Keybind"
				Keybind.Parent = LEFT_TIGHT
				Keybind.BackgroundColor3 = Color3.fromRGB(25, 25, 25)
				Keybind.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Keybind.BorderSizePixel = 0
				Keybind.ClipsDescendants = true
				Keybind.Size = UDim2.new(0.970000029, 0, 0.899999976, 0)
				Keybind.BackgroundTransparency = 1


				task.delay(0.5,function()
					TWS:Create(Keybind,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				UIAspectRatioConstraint.Parent = Keybind
				UIAspectRatioConstraint.AspectRatio = 8.000
				UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize

				UIStroke.Thickness = 1.500
				UIStroke.Color = Color3.fromRGB(18, 18, 18)
				UIStroke.Parent = Keybind
				UIStroke.Transparency = 1


				task.delay(0.5,function()
					TWS:Create(UIStroke,TweenInfo.new(0.55),{Transparency = 0}):Play()
				end)
				UICorner.CornerRadius = UDim.new(0, 2)
				UICorner.Parent = Keybind

				UIListLayout.Parent = Keybind
				UIListLayout.FillDirection = Enum.FillDirection.Horizontal
				UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
				UIListLayout.VerticalAlignment = Enum.VerticalAlignment.Center
				UIListLayout.Padding = UDim.new(0, 5)

				_SPACE.Name = "_SPACE"
				_SPACE.Parent = Keybind
				_SPACE.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				_SPACE.BackgroundTransparency = 1.000
				_SPACE.BorderColor3 = Color3.fromRGB(0, 0, 0)
				_SPACE.BorderSizePixel = 0
				_SPACE.Size = UDim2.new(0, 0, 1, 0)
				
				Target.Name = "Target"
				Target.Parent = Keybind
				Target.AnchorPoint = Vector2.new(0, 0.5)
				Target.BackgroundColor3 = Color3.fromRGB(49, 49, 49)
				Target.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Target.BorderSizePixel = 0
				Target.Position = UDim2.new(0.0250000004, 0, 0.5, 0)
				Target.Size = UDim2.new(0, 80, 0.600000024, 0)
				Target.SizeConstraint = Enum.SizeConstraint.RelativeYY
				Target.ZIndex = 7
				Target.BackgroundTransparency = 1


				task.delay(0.5,function()
					TWS:Create(Target,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				UICorner_2.CornerRadius = UDim.new(0, 2)
				UICorner_2.Parent = Target

				KeybindText.Name = "KeybindText"
				KeybindText.Parent = Target
				KeybindText.AnchorPoint = Vector2.new(0.5, 0.5)
				KeybindText.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				KeybindText.BackgroundTransparency = 1.000
				KeybindText.BorderColor3 = Color3.fromRGB(0, 0, 0)
				KeybindText.BorderSizePixel = 0
				KeybindText.Position = UDim2.new(0.5, 0, 0.5, 0)
				KeybindText.Size = UDim2.new(0.949999988, 0, 0.699999988, 0)
				KeybindText.ZIndex = 9
				KeybindText.Font = Enum.Font.GothamBold
				KeybindText.Text = "NONE"
				KeybindText.TextColor3 = Color3.fromRGB(255, 255, 255)
				KeybindText.TextScaled = true
				KeybindText.TextSize = 14.000
				KeybindText.TextTransparency = 0.500
				KeybindText.TextWrapped = true
				KeybindText.TextTransparency = 1


				task.delay(0.5,function()
					TWS:Create(KeybindText,TweenInfo.new(0.55),{TextTransparency = 0.5}):Play()
				end)
				Button.Name = "Button"
				Button.Parent = Target
				Button.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Button.BackgroundTransparency = 1.000
				Button.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Button.BorderSizePixel = 0
				Button.Size = UDim2.new(1, 0, 1, 0)
				Button.ZIndex = 20
				Button.Font = Enum.Font.SourceSans
				Button.TextColor3 = Color3.fromRGB(0, 0, 0)
				Button.TextSize = 14.000
				Button.TextTransparency = 1.000
			
				Label.Name = "Label"
				Label.Parent = Keybind
				Label.AnchorPoint = Vector2.new(0.5, 0.5)
				Label.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Label.BackgroundTransparency = 1.000
				Label.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Label.BorderSizePixel = 0
				Label.Position = UDim2.new(0.549679101, 0, 0.5, 0)
				Label.Size = UDim2.new(0.850641727, 0, 0.5, 0)
				Label.ZIndex = 6
				Label.Font = Enum.Font.GothamBold
				Label.Text = KrybindName or "Keybind Function"
				Label.TextColor3 = Color3.fromRGB(252, 252, 252)
				Label.TextScaled = true
				Label.TextSize = 14.000
				Label.TextWrapped = true
				Label.TextXAlignment = Enum.TextXAlignment.Left
				Label.TextTransparency = 0.25
				Label.TextTransparency = 1


				task.delay(0.5,function()
					TWS:Create(Label,TweenInfo.new(0.55),{TextTransparency = 0.25}):Play()
				end)
				
				UIGradient.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 255, 255)), ColorSequenceKeypoint.new(0.64, Color3.fromRGB(206, 206, 206)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(134, 134, 134))}
				UIGradient.Rotation = 90
				UIGradient.Parent = Label
				
				local function settext(gt)
					KeybindText.Text = gt
					local size = TS:GetTextSize(KeybindText.Text,KeybindText.TextSize,KeybindText.Font,Vector2.new(math.huge,math.huge))
					
					TWS:Create(Target,TweenInfo.new(0.25),{
						Size = UDim2.new(0,size.X + 4,0.600000024,0)
					}):Play()
				end;
				
				settext(((Default and Default.Name) or "NONE"))
				
				local WaitEvent = Instance.new('BindableEvent')
				local Inbind = false
				
				Button.MouseButton1Click:Connect(function()
					if Inbind then
						return
					end
					
					Create_Ripple(Button)
					
					TWS:Create(Label,TweenInfo.new(0.1),{TextTransparency = 0}):Play()
					TWS:Create(KeybindText,TweenInfo.new(0.1),{TextTransparency = 0.25}):Play()
					
					Inbind = true
					
					settext("...")
					
					Default = nil
					
					local Input = UIS.InputEnded:Connect(function(Input,typing)
						if not typing then
							if Input.KeyCode ~= Enum.KeyCode.Unknown then
								WaitEvent:Fire(Input.KeyCode)
							end
						end
					end)
					
					local Out = WaitEvent.Event:Wait()
					
					if Input then
						Input:Disconnect()
					end
					
					settext(Out.Name)
					
					TWS:Create(Label,TweenInfo.new(0.1),{TextTransparency = 0.25}):Play()
					TWS:Create(KeybindText,TweenInfo.new(0.1),{TextTransparency = 0.5}):Play()
					
					callback(Out)
					Inbind = false
				end)
				
				return {
					edit = function(t)
						Label.Text = t or "Label Function"
					end,
					set = function(v)
						settext(v)
					end,
					delete = function()
						Label:Destroy()
					end,
				}
			end
			
			function metatable:NewButton(ButtonName,callback)
				callback = callback or Huakuay.b_function
				
				local Button = Instance.new("Frame")
				local UIAspectRatioConstraint = Instance.new("UIAspectRatioConstraint")
				local UIStroke = Instance.new("UIStroke")
				local UIGradient = Instance.new("UIGradient")
				local UICorner = Instance.new("UICorner")
				local Label = Instance.new("TextLabel")
				local UIGradient_2 = Instance.new("UIGradient")
				local Button_2 = Instance.new("TextButton")

				Button.Name = "Button"
				Button.Parent = LEFT_TIGHT
				Button.BackgroundColor3 = Color3.fromRGB(222, 0, 4)
				Button.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Button.BorderSizePixel = 0
				Button.ClipsDescendants = true
				Button.Size = UDim2.new(0.970000029, 0, 0.899999976, 0)
				
				Button.BackgroundTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Button,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				
				UIAspectRatioConstraint.Parent = Button
				UIAspectRatioConstraint.AspectRatio = 8.000
				UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize

				UIStroke.Thickness = 1.500
				UIStroke.Color = Color3.fromRGB(18, 18, 18)
				UIStroke.Parent = Button
				
				UIStroke.Transparency = 1

				task.delay(0.5,function()
					TWS:Create(UIStroke,TweenInfo.new(0.55),{Transparency = 0}):Play()
				end)
				
				UIGradient.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 255, 255)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(80, 80, 80))}
				UIGradient.Rotation = 90
				UIGradient.Parent = Button

				UICorner.CornerRadius = UDim.new(0, 2)
				UICorner.Parent = Button

				Label.Name = "Label"
				Label.Parent = Button
				Label.AnchorPoint = Vector2.new(0.5, 0.5)
				Label.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Label.BackgroundTransparency = 1.000
				Label.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Label.BorderSizePixel = 0
				Label.Position = UDim2.new(0.5, 0, 0.5, 0)
				Label.Size = UDim2.new(0.949999988, 0, 0.5, 0)
				Label.Font = Enum.Font.GothamBold
				Label.Text = ButtonName or "Button Function"
				Label.TextColor3 = Color3.fromRGB(252, 252, 252)
				Label.TextScaled = true
				Label.TextSize = 14.000
				Label.TextWrapped = true
		
				Label.TextTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Label,TweenInfo.new(0.5),{TextTransparency = 0.3}):Play()
				end)
				
				UIGradient_2.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 255, 255)), ColorSequenceKeypoint.new(0.64, Color3.fromRGB(206, 206, 206)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(134, 134, 134))}
				UIGradient_2.Rotation = 90
				UIGradient_2.Parent = Label

				Button_2.Name = "Button"
				Button_2.Parent = Button
				Button_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Button_2.BackgroundTransparency = 1.000
				Button_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Button_2.BorderSizePixel = 0
				Button_2.Size = UDim2.new(1, 0, 1, 0)
				Button_2.ZIndex = 20
				Button_2.Font = Enum.Font.SourceSans
				Button_2.TextColor3 = Color3.fromRGB(0, 0, 0)
				Button_2.TextSize = 14.000
				Button_2.TextTransparency = 1.000
				
				Button_2.MouseEnter:Connect(function()
					TWS:Create(Label,TweenInfo.new(0.2),{TextTransparency = 0}):Play()
				end)
				
				Button_2.MouseLeave:Connect(function()
					TWS:Create(Label,TweenInfo.new(0.2),{TextTransparency = 0.3}):Play()
				end)
				
				Button_2.MouseButton1Down:Connect(function()
					TWS:Create(UIGradient,TweenInfo.new(0.1),{Offset = Vector2.new(0, 0.5)}):Play()
				end)
				
				Button_2.MouseButton1Up:Connect(function()
					TWS:Create(UIGradient,TweenInfo.new(0.1),{Offset = Vector2.new(0, 0)}):Play()
				end)
				
				Button_2.MouseButton1Click:Connect(function()
					Create_Ripple(Button)
					callback()
				end)
				
				return {
					edit = function(t)
						Label.Text = t or "Label Function"
					end,
					fire = callback,
					delete = function()
						Label:Destroy()
					end,
				}
			end
			
			function metatable:NewDropdown(DropdownName,Data,Default,callback)
				Data = Data or {}
				
				Default = Default or Data[1] 
				callback = callback or Huakuay.b_function

				local Dropdown = Instance.new("Frame")
				local UIAspectRatioConstraint = Instance.new("UIAspectRatioConstraint")
				local UIStroke = Instance.new("UIStroke")
				local UICorner = Instance.new("UICorner")
				local Frame = Instance.new("Frame")
				local UIAspectRatioConstraint_2 = Instance.new("UIAspectRatioConstraint")
				local MainDropdown = Instance.new("Frame")
				local UICorner_2 = Instance.new("UICorner")
				local UIStroke_2 = Instance.new("UIStroke")
				local Icon = Instance.new("ImageLabel")
				local ValueText = Instance.new("TextLabel")
				local Button = Instance.new("TextButton")
				local Label = Instance.new("TextLabel")
				local UIGradient = Instance.new("UIGradient")
				local UIListLayout = Instance.new("UIListLayout")
				local ScrollingFrame = Instance.new("ScrollingFrame")
				local UIAspectRatioConstraint_3 = Instance.new("UIAspectRatioConstraint")
				local UIStroke_3 = Instance.new("UIStroke")
				local UICorner_3 = Instance.new("UICorner")
				local UIListLayout_2 = Instance.new("UIListLayout")
				local __SPACE__ = Instance.new("Frame")

				Dropdown.Name = "Dropdown"
				Dropdown.Parent = LEFT_TIGHT
				Dropdown.BackgroundColor3 = Color3.fromRGB(25, 25, 25)
				Dropdown.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Dropdown.BorderSizePixel = 0
				Dropdown.ClipsDescendants = true
				Dropdown.Size = UDim2.new(0.970000029, 0, 0.899999976, 0)
				Dropdown.ZIndex = 6
				
				Dropdown.BackgroundTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Dropdown,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				
				UIAspectRatioConstraint.Parent = Dropdown
				UIAspectRatioConstraint.AspectRatio = 5.000
				UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize

				UIStroke.Thickness = 1.500
				UIStroke.Color = Color3.fromRGB(18, 18, 18)
				UIStroke.Parent = Dropdown
				UIStroke.Transparency = 1


				task.delay(0.5,function()
					TWS:Create(UIStroke,TweenInfo.new(0.55),{Transparency = 0}):Play()
				end)
				UICorner.CornerRadius = UDim.new(0, 2)
				UICorner.Parent = Dropdown

				Frame.Parent = Dropdown
				Frame.AnchorPoint = Vector2.new(0.5, 0)
				Frame.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Frame.BackgroundTransparency = 1.000
				Frame.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Frame.BorderSizePixel = 0
				Frame.Position = UDim2.new(0.5, 0, 0, 0)
				Frame.Size = UDim2.new(1, 0, 1, 0)
				Frame.ZIndex = 9
				
				
				UIAspectRatioConstraint_2.Parent = Frame
				UIAspectRatioConstraint_2.AspectRatio = 5.000
				UIAspectRatioConstraint_2.AspectType = Enum.AspectType.ScaleWithParentSize

				MainDropdown.Name = "MainDropdown"
				MainDropdown.Parent = Frame
				MainDropdown.AnchorPoint = Vector2.new(0.5, 0.5)
				MainDropdown.BackgroundColor3 = Color3.fromRGB(13, 13, 13)
				MainDropdown.BorderColor3 = Color3.fromRGB(0, 0, 0)
				MainDropdown.BorderSizePixel = 0
				MainDropdown.ClipsDescendants = true
				MainDropdown.Position = UDim2.new(0.5, 0, 0.670000017, 0)
				MainDropdown.Size = UDim2.new(0.949999988, 0, 0.400000006, 0)
				MainDropdown.ZIndex = 7
				
				MainDropdown.BackgroundTransparency = 1

				task.delay(0.5,function()
					TWS:Create(MainDropdown,TweenInfo.new(0.55),{BackgroundTransparency = 0}):Play()
				end)
				
				UICorner_2.CornerRadius = UDim.new(0, 2)
				UICorner_2.Parent = MainDropdown

				UIStroke_2.Thickness = 1.500
				UIStroke_2.Color = Color3.fromRGB(18, 18, 18)
				UIStroke_2.Parent = MainDropdown
				UIStroke_2.Transparency = 1


				task.delay(0.5,function()
					TWS:Create(UIStroke_2,TweenInfo.new(0.55),{Transparency = 0}):Play()
				end)
				
				Icon.Name = "Icon"
				Icon.Parent = MainDropdown
				Icon.AnchorPoint = Vector2.new(1, 0.5)
				Icon.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Icon.BackgroundTransparency = 1.000
				Icon.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Icon.BorderSizePixel = 0
				Icon.Position = UDim2.new(1, 0, 0.5, 0)
				Icon.Size = UDim2.new(0.899999976, 0, 0.899999976, 0)
				Icon.SizeConstraint = Enum.SizeConstraint.RelativeYY
				Icon.ZIndex = 9
				Icon.Image = "rbxassetid://7733723321"
				
				Icon.ImageTransparency = 1
				
				task.delay(0.5,function()
					TWS:Create(Icon,TweenInfo.new(0.55),{ImageTransparency = 0}):Play()
				end)
				
				
				ValueText.Name = "ValueText"
				ValueText.Parent = MainDropdown
				ValueText.AnchorPoint = Vector2.new(0.5, 0.5)
				ValueText.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				ValueText.BackgroundTransparency = 1.000
				ValueText.BorderColor3 = Color3.fromRGB(0, 0, 0)
				ValueText.BorderSizePixel = 0
				ValueText.Position = UDim2.new(0.5, 0, 0.5, 0)
				ValueText.Size = UDim2.new(0.949999988, 0, 0.649999976, 0)
				ValueText.ZIndex = 7
				ValueText.Font = Enum.Font.GothamBold
				ValueText.Text = tostring(Default) or "NONE"
				ValueText.TextColor3 = Color3.fromRGB(255, 255, 255)
				ValueText.TextScaled = true
				ValueText.TextSize = 14.000
				ValueText.TextWrapped = true
				
				ValueText.TextTransparency = 1

				task.delay(0.5,function()
					TWS:Create(ValueText,TweenInfo.new(0.55),{TextTransparency = 0.5}):Play()
				end)
				
				
				Button.Name = "Button"
				Button.Parent = MainDropdown
				Button.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Button.BackgroundTransparency = 1.000
				Button.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Button.BorderSizePixel = 0
				Button.Size = UDim2.new(1, 0, 1, 0)
				Button.ZIndex = 20
				Button.Font = Enum.Font.SourceSans
				Button.TextColor3 = Color3.fromRGB(0, 0, 0)
				Button.TextSize = 14.000
				Button.TextTransparency = 1.000
				
			
				
				Label.Name = "Label"
				Label.Parent = Frame
				Label.AnchorPoint = Vector2.new(1, 0.5)
				Label.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				Label.BackgroundTransparency = 1.000
				Label.BorderColor3 = Color3.fromRGB(0, 0, 0)
				Label.BorderSizePixel = 0
				Label.Position = UDim2.new(0.879999995, 0, 0.209999993, 0)
				Label.Size = UDim2.new(0.851000011, 0, 0.324999988, 0)
				Label.ZIndex = 8
				Label.Font = Enum.Font.GothamBold
				Label.Text = DropdownName or "Dropdown Function"
				Label.TextColor3 = Color3.fromRGB(252, 252, 252)
				Label.TextScaled = true
				Label.TextSize = 14.000
				Label.TextWrapped = true
				Label.TextXAlignment = Enum.TextXAlignment.Left
				
				Label.TextTransparency = 1

				task.delay(0.5,function()
					TWS:Create(Label,TweenInfo.new(0.55),{TextTransparency = 0}):Play()
				end)
				
				UIGradient.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 255, 255)), ColorSequenceKeypoint.new(0.64, Color3.fromRGB(206, 206, 206)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(134, 134, 134))}
				UIGradient.Rotation = 90
				UIGradient.Parent = Label

				UIListLayout.Parent = Dropdown
				UIListLayout.HorizontalAlignment = Enum.HorizontalAlignment.Center
				UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
				UIListLayout.Padding = UDim.new(0, 1)

				ScrollingFrame.Parent = Dropdown
				ScrollingFrame.Active = true
				ScrollingFrame.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
				ScrollingFrame.BackgroundTransparency = 0.900
				ScrollingFrame.BorderColor3 = Color3.fromRGB(0, 0, 0)
				ScrollingFrame.BorderSizePixel = 0
				ScrollingFrame.Size = UDim2.new(0.980000019, 0, 0.5, 0)
				ScrollingFrame.ZIndex = 9
				ScrollingFrame.ScrollBarThickness = 1
				
				ScrollingFrame.BackgroundTransparency = 1

				task.delay(0.5,function()
					TWS:Create(ScrollingFrame,TweenInfo.new(0.55),{BackgroundTransparency = 0.9}):Play()
				end)
				
				UIAspectRatioConstraint_3.Parent = ScrollingFrame
				UIAspectRatioConstraint_3.AspectRatio = 5.000
				UIAspectRatioConstraint_3.AspectType = Enum.AspectType.ScaleWithParentSize

				UIStroke_3.Thickness = 1.500
				UIStroke_3.Color = Color3.fromRGB(50, 50, 50)
				UIStroke_3.Parent = ScrollingFrame
				UIStroke_3.Transparency = 1


				task.delay(0.5,function()
					TWS:Create(UIStroke_3,TweenInfo.new(0.55),{Transparency = 0}):Play()
				end)

				UICorner_3.CornerRadius = UDim.new(0, 2)
				UICorner_3.Parent = ScrollingFrame

				UIListLayout_2.Parent = ScrollingFrame
				UIListLayout_2.HorizontalAlignment = Enum.HorizontalAlignment.Center
				UIListLayout_2.SortOrder = Enum.SortOrder.LayoutOrder
				UIListLayout_2.Padding = UDim.new(0, 4)
				UIListLayout_2:GetPropertyChangedSignal('AbsoluteContentSize'):Connect(function()
					ScrollingFrame.CanvasSize = UDim2.new(0,0,0,UIListLayout_2.AbsoluteContentSize.Y)
				end)
				__SPACE__.Name = "__SPACE__"
				__SPACE__.Parent = ScrollingFrame
				__SPACE__.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
				__SPACE__.BorderColor3 = Color3.fromRGB(0, 0, 0)
				__SPACE__.BorderSizePixel = 0
				
				local function __toggle_interface(val)
					if val then
						TWS:Create(UIAspectRatioConstraint,TweenInfo.new(0.3),{AspectRatio = 1.5}):Play()
						TWS:Create(UIAspectRatioConstraint_3,TweenInfo.new(0.3),{AspectRatio = 2.2}):Play()
						TWS:Create(ValueText,TweenInfo.new(0.5),{TextTransparency = 0}):Play()
					else
						TWS:Create(ValueText,TweenInfo.new(0.5),{TextTransparency = 0.5}):Play()
						TWS:Create(UIAspectRatioConstraint,TweenInfo.new(0.3),{AspectRatio = 5}):Play()
						TWS:Create(UIAspectRatioConstraint_3,TweenInfo.new(0.3),{AspectRatio = 5}):Play()
					end
				end
				
				__toggle_interface(false)
				local iNTERFACEtOGGLE = false
				
				Button.MouseButton1Click:Connect(function()
					Create_Ripple(Frame)
					iNTERFACEtOGGLE = not iNTERFACEtOGGLE
					
					__toggle_interface(iNTERFACEtOGGLE)
				end)
				
				local function update()
					for i,v in ipairs(ScrollingFrame:GetChildren()) do
						if v:IsA('Frame') and v.Name ~= "__SPACE__" then
							v:Destroy()
						end
					end
					
					for i,v in pairs(Data) do
						local Button = Instance.new("Frame")
						local UIAspectRatioConstraint = Instance.new("UIAspectRatioConstraint")
						local UIStroke = Instance.new("UIStroke")
						local UICorner = Instance.new("UICorner")
						local Label = Instance.new("TextLabel")
						local UIGradient = Instance.new("UIGradient")
						local Button_2 = Instance.new("TextButton")

						Button.Name = "Button"
						Button.Parent = ScrollingFrame
						Button.BackgroundColor3 = Color3.fromRGB(43, 43, 43)
						Button.BorderColor3 = Color3.fromRGB(0, 0, 0)
						Button.BorderSizePixel = 0
						Button.ClipsDescendants = true
						Button.Size = UDim2.new(0.970000029, 0, 0.899999976, 0)
						Button.ZIndex = 12

						UIAspectRatioConstraint.Parent = Button
						UIAspectRatioConstraint.AspectRatio = 8.000
						UIAspectRatioConstraint.AspectType = Enum.AspectType.ScaleWithParentSize

						UIStroke.Thickness = 1.500
						UIStroke.Color = Color3.fromRGB(18, 18, 18)
						UIStroke.Parent = Button

						UICorner.CornerRadius = UDim.new(0, 2)
						UICorner.Parent = Button

						Label.Name = "Label"
						Label.Parent = Button
						Label.AnchorPoint = Vector2.new(0.5, 0.5)
						Label.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
						Label.BackgroundTransparency = 1.000
						Label.BorderColor3 = Color3.fromRGB(0, 0, 0)
						Label.BorderSizePixel = 0
						Label.Position = UDim2.new(0.5, 0, 0.5, 0)
						Label.Size = UDim2.new(0.949999988, 0, 0.5, 0)
						Label.ZIndex = 13
						Label.Font = Enum.Font.GothamBold
						Label.Text = tostring(v)
						Label.TextColor3 = Color3.fromRGB(252, 252, 252)
						Label.TextScaled = true
						Label.TextSize = 14.000
						Label.TextWrapped = true

						UIGradient.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 255, 255)), ColorSequenceKeypoint.new(0.64, Color3.fromRGB(206, 206, 206)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(134, 134, 134))}
						UIGradient.Rotation = 90
						UIGradient.Parent = Label

						Button_2.Name = "Button"
						Button_2.Parent = Button
						Button_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
						Button_2.BackgroundTransparency = 1.000
						Button_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
						Button_2.BorderSizePixel = 0
						Button_2.Size = UDim2.new(1, 0, 1, 0)
						Button_2.ZIndex = 20
						Button_2.Font = Enum.Font.SourceSans
						Button_2.TextColor3 = Color3.fromRGB(0, 0, 0)
						Button_2.TextSize = 14.000
						Button_2.TextTransparency = 1.000
						
						Button_2.MouseButton1Click:Connect(function()
							Create_Ripple(Button)
							Default = v
							ValueText.TextTransparency = 1
							TWS:Create(ValueText,TweenInfo.new(0.2),{TextTransparency = 0}):Play()
							ValueText.Text = tostring(Default) or "NONE"
							callback(v)
						end)
					end
				end
				
				update()
				
				return {
					edit = function(t)
						Label.Text = t or "Label Function"
					end,
					get = function(t)
						return Default
					end,
					fire = callback,
					delete = function()
						Label:Destroy()
					end,
				}
			end
			
			
			return metatable
		end
		
		TabMetatable.Left = TabMetatable.__dex(TabFrame.Left)
		TabMetatable.Right = TabMetatable.__dex(TabFrame.Right)

		return TabMetatable;
	end
	
	WindowMetatable.Transparencys = {}
	
	local function SaveTransparency(object)
		local Val,BT = pcall(function()
			return object.BackgroundTransparency
		end)
		
		local Val,T = pcall(function()
			return object.Transparency
		end)
		
		local Val,TextTransparency = pcall(function()
			return object.TextTransparency
		end)
		
		local Val,IT = pcall(function()
			return object.ImageTransparency
		end)
		
		WindowMetatable.Transparencys[object] = {
			BackgroundTransparency = BT,
			Transparency = T,
			TextTransparency = TextTransparency,
			ImageTransparency = IT
		}
	end
	
	local function ToggleUI(val)
		for i,v in next,ScreenGui:GetDescendants() do
			if not WindowMetatable.Transparencys[v] then
				SaveTransparency(v)
			end
			
			local Save = WindowMetatable.Transparencys[v]
			
			if val then
				pcall(function()
					TWS:Create(v,TweenInfo.new(0.5),{BackgroundTransparency = Save.BackgroundTransparency}):Play()
				end)
				
				pcall(function()
					TWS:Create(v,TweenInfo.new(0.5),{Transparency = Save.Transparency}):Play()
				end)
				
				task.delay(0.5,function()
					pcall(function()
						if WindowMetatable.ScreenUI then
							TWS:Create(v,TweenInfo.new(0.5),{TextTransparency = Save.TextTransparency}):Play()
						end
					end)
				end)
				
				pcall(function()
					TWS:Create(v,TweenInfo.new(0.5),{ImageTransparency = Save.ImageTransparency}):Play()
				end)
			else
				pcall(function()
					TWS:Create(v,TweenInfo.new(0.5),{BackgroundTransparency = 1}):Play()
				end)

				pcall(function()
					TWS:Create(v,TweenInfo.new(0.5),{Transparency = 1}):Play()
				end)

				pcall(function()
					TWS:Create(v,TweenInfo.new(0.5),{TextTransparency = 1}):Play()
				end)

				pcall(function()
					TWS:Create(v,TweenInfo.new(0.5),{ImageTransparency = 1}):Play()
				end)
			end
		end
	end
	
	local ToggleUITick = tick()
	
	function WindowMetatable:SetKeybind(k)
		UIS.InputBegan:Connect(function(ka)
			if ka.KeyCode == k then
				WindowMetatable.ScreenUI = not WindowMetatable.ScreenUI
				if WindowMetatable.ScreenUI then
					ScreenGui.Enabled = true
				end
				
				ToggleUITick = tick() + 1.5
				ToggleUI(WindowMetatable.ScreenUI)
			end
		end)	
	end
	
	task.spawn(function()
		while true do task.wait(math.random())
			if tick() > ToggleUITick then
				ScreenGui.Enabled = WindowMetatable.ScreenUI
			end
		end	
	end)
	
	local dragToggle = nil
	local dragSpeed = 0.085
	local dragStart = nil
	local startPos = nil

	local function updateInput(input)
		local delta = input.Position - dragStart
		local position = UDim2.new(startPos.X.Scale, startPos.X.Offset + delta.X,
			startPos.Y.Scale, startPos.Y.Offset + delta.Y)
		TWS:Create(Frame, TweenInfo.new(dragSpeed), {Position = position}):Play()
	end

	Header.InputBegan:Connect(function(input)
		if (input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch) then 
			dragToggle = true
			dragStart = input.Position
			startPos = Frame.Position
			input.Changed:Connect(function()
				if input.UserInputState == Enum.UserInputState.End then
					dragToggle = false
				end
			end)
		end
	end)

	UIS.InputChanged:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch then
			if dragToggle then
				updateInput(input)
			end
		end
	end)
	
	return WindowMetatable
end

return Huakuay
